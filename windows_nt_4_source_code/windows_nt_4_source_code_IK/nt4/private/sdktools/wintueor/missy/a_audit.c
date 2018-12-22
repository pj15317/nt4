/*++

Copyright (c) 1994  Microsoft Corporation

Module Name:

    A_Audit.c

Abstract:

    This module contains the code related to the Audit
    security area and it's corresponding items.


Author:

    Jim Kelly (JimK) 22-Mar-1995

Revision History:

--*/

#include "Missyp.h"

//
// Number of items in this area
//

#define MISSYP_AUDIT_ITEM_COUNT                (4)



///////////////////////////////////////////////////////////////////////
//                                                                   //
//  Local Function Prototypes                                        //
//                                                                   //
///////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////
//                                                                   //
//  Module-wide variables                                            //
//                                                                   //
///////////////////////////////////////////////////////////////////////


//
// The index of this area within the array of area descriptors
// in the Smedly control structure.
//

ULONG
    MissypAuditIndex ;

PSECMGR_AREA_DESCRIPTOR
    MissypAuditArea;

WCHAR
    MissypAuditAreaName[SECMGR_MAX_AREA_NAME_LENGTH],
    MissypAuditAreaDesc[SECMGR_MAX_AREA_DESC_LENGTH];


///////////////////////////////////////////////////////////////////////
//                                                                   //
//  Externally callable functions                                    //
//                                                                   //
///////////////////////////////////////////////////////////////////////

BOOL
MissypAuditInitialize(
    IN  ULONG           AreaIndex
    )

/*++
Routine Description:

    This function is called to initialize the Audit area
    and corresponding items.  This includes adding the Audit
    area/item information to the smedly control structure (MissypControl).

    The security manager control information (in the global variable
    MissypSecMgrControl) must be available before this routine is called.



Arguments

    AreaIndex - The index of this area in the array of areas kept in the
        Missy control structure.


Return Values:

    TRUE - The call completed successfully.

    FALSE - Something went wrong.  GetLastError() contains
        details on the exact cause of the error.  Possible
        values include:

                ERROR_NOT_ENOUGH_MEMORY

--*/
{
    ULONG
        ItemIndex;

    MissypAuditIndex = AreaIndex;

    LoadString( MissyphInstance,
                MISSYP_STRING_AREA_AUDIT_NAME,
                &MissypAuditAreaName[0],
                SECMGR_MAX_AREA_NAME_LENGTH
                );
    LoadString( MissyphInstance,
                MISSYP_STRING_AREA_AUDIT_DESC,
                &MissypAuditAreaDesc[0],
                SECMGR_MAX_AREA_DESC_LENGTH
                );

    //
    // Initialize our area
    //
    //

    MissypAuditArea = &MissypControl.Areas[AreaIndex];

    MissypAuditArea->Revision.Major    = SECMGR_REVISION_MAJOR_1;
    MissypAuditArea->Revision.Minor    = SECMGR_REVISION_MINOR_0;

    MissypAuditArea->Flags             = SECMGR_AREA_FLAG_AREA_VIEW;
    MissypAuditArea->SmedlyContext     = NULL;     // Missy doesn't use this yet
    MissypAuditArea->SmedlyControl     = (PVOID)(&MissypControl);
    MissypAuditArea->AreaIndex         = AreaIndex;

    MissypAuditArea->Name              = MissypAuditAreaName;
    MissypAuditArea->Description       = MissypAuditAreaDesc;

    MissypAuditArea->ItemCount         = 0; //MISSYP_AUDIT_ITEM_COUNT;

    MissypAuditArea->Items             = (PSECMGR_ITEM_DESCRIPTOR)
                                           LocalAlloc( LPTR, 
                                             (MISSYP_AUDIT_ITEM_COUNT * sizeof(SECMGR_ITEM_DESCRIPTOR))
                                             );
    if (MissypAuditArea->Items == NULL) {
        SetLastError(ERROR_NOT_ENOUGH_MEMORY);
        return(FALSE);
    }

    //
    // Initialize each item
    //

#ifdef NOT_YET_IMPLEMENTED
    ItemIndex = 0;
    if (!MissypLogonCacheInitialize( MissypAuditArea, ItemIndex )) {
        return(FALSE);
    }

    ItemIndex++;
    if (!MissypWorkstationLockInitialize( MissypAuditArea, ItemIndex )) {
        return(FALSE);
    }

#endif
}




BOOL
MissypAuditInvokeArea(
    IN  HWND                        hwnd,
    IN  BOOL                        AllowChanges,
    IN  BOOL                        Interactive,
    IN  PSECMGR_AREA_DESCRIPTOR     Area
    )

/*++
Routine Description:

    This function is called to activate this area's full-screen dialog

    
Arguments

    hwnd - A handle to a Security Manager window which is the parent
        of the dialog the smedly is expected to display.
    
    AllowChanges - If TRUE, then the user may make changes to values
        displayed in the area.  Otherwise, the area should be presented
        in a view-only mode.

    Interactive - Indicates whether or not the area should be displayed or
        not.  If TRUE, then UI showing the area information to the user
        should be presented.  If FALSE, then the area should initialize its
        item values, but return immediately without actually displaying any
        UI.

    Area - Pointer to this Area's descriptor.
    

Return Values:

    TRUE - The routine completed successfully.  Item values may or may not
        have changed.

    FALSE - The routine failed to complete successfully.  GetLastError()
        contains further information about the cause of failure.

--*/

{

    BOOL
        Result;

    SetLastError( ERROR_CALL_NOT_IMPLEMENTED );
    Result = FALSE;

    return(Result);


}



BOOL
MissypAuditInvokeItem(
    IN  HWND                        hwnd,
    IN  BOOL                        AllowChanges,
    IN  PSECMGR_AREA_DESCRIPTOR     Area,
    IN  PSECMGR_ITEM_DESCRIPTOR     Item
    )

/*++
Routine Description:

    This function is called when the dialog view of
    a particular item is requested.  The smedly is responsible
    for providing the dialogs of this view to the user.

    This routine will only be invoked for items for which
    SECMGR_ITEM_FLAG_ITEM_VIEW is specified in the Flags field
    of the SECMGR_ITEM_DESCRIPTOR.

    
Arguments

    hwnd - A handle to a Security Manager window which is the parent
        of the dialog the smedly is expected to display.
    
    AllowChanges - If TRUE, then the user may make changes to values
        displayed for the item.  Otherwise, the item should be presented
        in a view-only mode.

    Area - Pointer to this area.

    Item - Pointer to the item of this area to be displayed.



Return Values:

    TRUE - The routine completed successfully.  The current item value
        may or may not have changed.

    FALSE - The routine failed to complete successfully.  GetLastError()
        contains further information about the cause of failure.

--*/
{

    BOOL
        Result;

    SetLastError( ERROR_CALL_NOT_IMPLEMENTED );
    Result = FALSE;

    return(Result);


}



BOOL
MissypAuditNewSecurityLevel( VOID )

/*++
Routine Description:

    This function is called when a new system security level has
    been selected.  This may cause a Smedly to go out and re-evaluate
    its recommended values for the specified area.


    
Arguments

    

Return Values:

    TRUE - The routine completed successfully.  Item values and recommendations
        may or may not have changed.

    FALSE - The routine failed to complete successfully.  GetLastError()
        contains further information about the cause of failure.

--*/
{

    BOOL
        Result;

    SetLastError( ERROR_CALL_NOT_IMPLEMENTED );
    Result = FALSE;

    return(Result);


}



VOID
MissypAuditReportFileChange(
    IN  BOOL                ReportFileActive,
    IN  DWORD               Pass
    )

/*++
Routine Description:

    This function is called to notify us that a new report
    file has been activated.  This gives us an opportunity
    to put some area-specific information into the report file.

    This is a 2-pass operation.  The first pass is done before the
    security manager places summary list of features and their current
    settings in the report file.  The second pass is made after this
    summary has been logged.  Smedlys should resist printing too many
    details until pass 2.

    If there is no new report file active, this call will only be made
    once (skipping the second pass).

    
Arguments

    ReportFileActive - If TRUE indicates that a new report file has been opened.
        If FALSE, indicates that a report file has been closed, and another was
        not opened.

    Pass - Indicates which pass this call relates to.  This will have a value of
        either 1 or 2.  This value is only set if ReportFileActive is TRUE.
    

Return Values:

    None.

--*/
{
    
    return;


}



BOOL
MissypAuditGenerateProfile( VOID )

/*++
Routine Description:

    This function is called to request a security profile of this area.
    
    
Arguments

    None
    

Return Values:

    TRUE - The routine completed successfully.

    FALSE - The routine failed to complete successfully.  GetLastError()
        contains further information about the cause of failure.

--*/
{

    BOOL
        Result;

    SetLastError( ERROR_CALL_NOT_IMPLEMENTED );
    Result = FALSE;

    return(Result);


}



BOOL
MissypAuditApplyProfile( VOID )

/*++
Routine Description:

    This function is called to request a profile of this area be applied
    to the current system.
    
    
Arguments

    None.
    

Return Values:

    TRUE - The routine completed successfully.

    FALSE - The routine failed to complete successfully.  GetLastError()
        contains further information about the cause of failure.

--*/
{

    BOOL
        Result;

    SetLastError( ERROR_CALL_NOT_IMPLEMENTED );
    Result = FALSE;

    return(Result);


}


///////////////////////////////////////////////////////////////////////
//                                                                   //
//  Locally callable functions                                       //
//                                                                   //
///////////////////////////////////////////////////////////////////////



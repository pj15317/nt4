// #define IN [in]
// #define OUT [out]
// #define CALLBACK

#define SIZE_IS(size)
#define LENGTH_IS(length)
#define UNIQUE
#define INTERFACE
#define SPLAY_TREE
#define STRING
#define CONTEXT_HANDLE

/*************************************************************************/
/***            Strongly typed tree nodes and dictionaries             ***/
/*************************************************************************/

/*
 ************************************************************************
 * Record type - previously imported from util1.idl
 * This is the type of items stored in the remote dictionary.
 ************************************************************************
*/

typedef struct _Record {
    short key;                      // RPC "generation"
    STRING char* name;              // contributor
} Record;

/*
 ************************************************************************
 * The following definitions (RDict, RecordTreeNode) are required
 * for marshalling a complete dictionary, binary tree, respectively.
 * All pointers are based on RPC-able types, replacing "void*"
 * pointers in the local dictionary (dict0) which are non-transmissible.
 ************************************************************************
*/

typedef struct _RecordTreeNode {
    struct _RecordTreeNode *left;   // left child pointer
    struct _RecordTreeNode *right;  // right child pointer
    Record *item;                   // pointer to a Record structure
} RecordTreeNode;

typedef struct _DictState {
    short ref_count;                // for shared dictionaries
    Record * curr_record;           // for global iterators
} DictState;

typedef struct _RDict {
    RecordTreeNode *root;           // pointer to the root of a SAT
    long size;                      // number of records in dictionary
    DictState * state;              // pointer to state info
} RDict;

/*
 * VDict is a "virtual dictionary" object.  It is used in the client
 * application as a handle on a dictionary maintained by a server
*/
typedef CONTEXT_HANDLE void * VDict;

/*
typedef enum {
    DICT_SUCCESS,
    DICT_ITEM_ALREADY_PRESENT,
    DICT_ITEM_NOT_FOUND,
    DICT_FIRST_ITEM,
    DICT_LAST_ITEM,
    DICT_EMPTY_DICTIONARY,
    DICT_NULL_ITEM
}
VDict_Status;

 *
 * VDict_Status and the #defines following replaces the above enum
 * definition for now.
*/

typedef short VDict_Status;


#define DICT_SUCCESS 0
#define DICT_ITEM_ALREADY_PRESENT 1
#define DICT_ITEM_NOT_FOUND 2
#define DICT_FIRST_ITEM 3
#define DICT_LAST_ITEM 4
#define DICT_EMPTY_DICTIONARY 5
#define DICT_NULL_ITEM 6


/*************************************************************************/
/***    Generic Dictionary Operations: (From dict0.h)                  ***/
/***                                                                   ***/
/***    Dictionary *Dict_New(Cmp_rec*, Splay*, print_rec*)             ***/
/***                                                                   ***/
/***    Dict_Status Dict_Find(Dictionary*, Item*)                      ***/
/***    Dict_Status Dict_Next(Dictionary*, Item*)                      ***/
/***    Dict_Status Dict_Prev(Dictionary*, Item*)                      ***/
/***    Dict_Status Dict_Insert(Dictionary*, Item*)                    ***/
/***    Dict_Status Dict_Delete(Dictionary*, Item**)                   ***/
/***                                                                   ***/
/***    Item* DICT_CURR_ITEM(Dict*)                                    ***/
/*************************************************************************/

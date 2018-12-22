
/*++

   baseapi.h: Defines the list of apis for kernel32.dll

        NOTE:  This file is generated by WRAPPER code generator.

--*/

#ifdef ZKERNEL32
char *aszApiNames [] = {
    "AddAtomA",
    "AddAtomW",
    "AllocConsole",
    "BackupRead",
    "BackupSeek",
    "BackupWrite",
    "Beep",
    "BeginUpdateResourceA",
    "BeginUpdateResourceW",
    "BuildCommDCBA",
    "BuildCommDCBAndTimeoutsA",
    "BuildCommDCBAndTimeoutsW",
    "BuildCommDCBW",
    "CallNamedPipeA",
    "CallNamedPipeW",
    "ClearCommBreak",
    "ClearCommError",
    "CloseHandle",
    "CompareFileTime",
    "CompareStringW",
    "ConnectNamedPipe",
    "ContinueDebugEvent",
    "CopyFileA",
    "CopyFileW",
    "CreateConsoleScreenBuffer",
    "CreateDirectoryA",
    "CreateDirectoryExA",
    "CreateDirectoryExW",
    "CreateDirectoryW",
    "CreateEventA",
    "CreateEventW",
    "CreateFileA",
    "CreateFileMappingA",
    "CreateFileMappingW",
    "CreateFileW",
    "CreateMailslotA",
    "CreateMailslotW",
    "CreateMutexA",
    "CreateMutexW",
    "CreateNamedPipeA",
    "CreateNamedPipeW",
    "CreatePipe",
    "CreateProcessA",
    "CreateProcessW",
    "CreateRemoteThread",
    "CreateSemaphoreA",
    "CreateSemaphoreW",
    "CreateTapePartition",
    "CreateThread",
    "DebugActiveProcess",
    "DebugBreak",
    "DefineDosDeviceA",
    "DefineDosDeviceW",
    "DeleteAtom",
    "DeleteCriticalSection",
    "DeleteFileA",
    "DeleteFileW",
    "DeviceIoControl",
    "DisconnectNamedPipe",
    "DosDateTimeToFileTime",
    "DuplicateHandle",
    "EndUpdateResourceA",
    "EndUpdateResourceW",
    "EnterCriticalSection",
    "EnumResourceLanguagesA",
    "EnumResourceLanguagesW",
    "EnumResourceNamesA",
    "EnumResourceNamesW",
    "EnumResourceTypesA",
    "EnumResourceTypesW",
    "EraseTape",
    "EscapeCommFunction",
    "ExitProcess",
    "ExitThread",
    "ExpandEnvironmentStringsA",
    "ExpandEnvironmentStringsW",
    "FatalAppExitA",
    "FatalAppExitW",
    "FatalExit",
    "FileTimeToDosDateTime",
    "FileTimeToLocalFileTime",
    "FileTimeToSystemTime",
    "FillConsoleOutputAttribute",
    "FillConsoleOutputCharacterA",
    "FillConsoleOutputCharacterW",
    "FindAtomA",
    "FindAtomW",
    "FindClose",
    "FindCloseChangeNotification",
    "FindFirstChangeNotificationA",
    "FindFirstChangeNotificationW",
    "FindFirstFileA",
    "FindFirstFileW",
    "FindNextChangeNotification",
    "FindNextFileA",
    "FindNextFileW",
    "FindResourceA",
    "FindResourceExA",
    "FindResourceExW",
    "FindResourceW",
    "FlushConsoleInputBuffer",
    "FlushFileBuffers",
    "FlushInstructionCache",
    "FlushViewOfFile",
    "FoldStringW",
    "FormatMessageA",
    "FormatMessageW",
    "FreeConsole",
    "FreeLibrary",
    "FreeResource",
    "GenerateConsoleCtrlEvent",
    "GetACP",
    "GetAtomNameA",
    "GetAtomNameW",
    "GetCPInfo",
    "GetCommMask",
    "GetCommModemStatus",
    "GetCommProperties",
    "GetCommState",
    "GetCommTimeouts",
    "GetCommandLineA",
    "GetCommandLineW",
    "GetComputerNameA",
    "GetComputerNameW",
    "GetConsoleCP",
    "GetConsoleCursorInfo",
    "GetConsoleMode",
    "GetConsoleOutputCP",
    "GetConsoleScreenBufferInfo",
    "GetConsoleTitleA",
    "GetConsoleTitleW",
    "GetCurrentDirectoryA",
    "GetCurrentDirectoryW",
    "GetCurrentProcess",
    "GetCurrentProcessId",
    "GetCurrentThread",
    "GetCurrentThreadId",
    "GetDateFormatW",
    "GetDiskFreeSpaceA",
    "GetDiskFreeSpaceW",
    "GetDriveTypeA",
    "GetDriveTypeW",
    "GetEnvironmentStringsA",
    "GetEnvironmentVariableA",
    "GetEnvironmentVariableW",
    "GetExitCodeProcess",
    "GetExitCodeThread",
    "GetFileAttributesA",
    "GetFileAttributesW",
    "GetFileInformationByHandle",
    "GetFileSize",
    "GetFileTime",
    "GetFileType",
    "GetFullPathNameA",
    "GetFullPathNameW",
    "GetLargestConsoleWindowSize",
    "GetLastError",
    "GetLocalTime",
    "GetLocaleInfoW",
    "GetLogicalDriveStringsA",
    "GetLogicalDriveStringsW",
    "GetLogicalDrives",
    "GetMailslotInfo",
    "GetModuleFileNameA",
    "GetModuleFileNameW",
    "GetModuleHandleA",
    "GetModuleHandleW",
    "GetNamedPipeHandleStateA",
    "GetNamedPipeHandleStateW",
    "GetNamedPipeInfo",
    "GetNumberOfConsoleInputEvents",
    "GetNumberOfConsoleMouseButtons",
    "GetOEMCP",
    "GetOverlappedResult",
    "GetPriorityClass",
    "GetPrivateProfileIntA",
    "GetPrivateProfileIntW",
    "GetPrivateProfileSectionA",
    "GetPrivateProfileSectionW",
    "GetPrivateProfileStringA",
    "GetPrivateProfileStringW",
    "GetProcAddress",
    "GetProcessHeap",
    "GetProcessShutdownParameters",
    "GetProcessTimes",
    "GetProfileIntA",
    "GetProfileIntW",
    "GetProfileSectionA",
    "GetProfileSectionW",
    "GetProfileStringA",
    "GetProfileStringW",
    "GetStartupInfoA",
    "GetStartupInfoW",
    "GetStdHandle",
    "GetStringTypeW",
    "GetSystemDefaultLCID",
    "GetSystemDefaultLangID",
    "GetSystemDirectoryA",
    "GetSystemDirectoryW",
    "GetSystemInfo",
    "GetSystemTime",
    "GetTapeParameters",
    "GetTapePosition",
    "GetTapeStatus",
    "GetTempFileNameA",
    "GetTempFileNameW",
    "GetTempPathA",
    "GetTempPathW",
    "GetThreadContext",
    "GetThreadLocale",
    "GetThreadPriority",
    "GetThreadSelectorEntry",
    "GetThreadTimes",
    "GetTickCount",
    "GetTimeFormatW",
    "GetTimeZoneInformation",
    "GetUserDefaultLCID",
    "GetUserDefaultLangID",
    "GetVersion",
    "GetVolumeInformationA",
    "GetVolumeInformationW",
    "GetWindowsDirectoryA",
    "GetWindowsDirectoryW",
    "GlobalAddAtomA",
    "GlobalAddAtomW",
    "GlobalAlloc",
    "GlobalCompact",
    "GlobalDeleteAtom",
    "GlobalFindAtomA",
    "GlobalFindAtomW",
    "GlobalFix",
    "GlobalFlags",
    "GlobalFree",
    "GlobalGetAtomNameA",
    "GlobalGetAtomNameW",
    "GlobalHandle",
    "GlobalLock",
    "GlobalMemoryStatus",
    "GlobalReAlloc",
    "GlobalSize",
    "GlobalUnWire",
    "GlobalUnfix",
    "GlobalUnlock",
    "GlobalWire",
    "HeapAlloc",
    "HeapCreate",
    "HeapDestroy",
    "HeapFree",
    "HeapReAlloc",
    "HeapSize",
    "InitAtomTable",
    "InitializeCriticalSection",
    "InterlockedDecrement",
    "InterlockedExchange",
    "InterlockedIncrement",
    "IsBadCodePtr",
    "IsBadHugeReadPtr",
    "IsBadHugeWritePtr",
    "IsBadReadPtr",
    "IsBadStringPtrA",
    "IsBadStringPtrW",
    "IsBadWritePtr",
    "IsDBCSLeadByte",
    "IsValidCodePage",
    "LCMapStringW",
    "LeaveCriticalSection",
    "LoadLibraryA",
    "LoadLibraryExA",
    "LoadLibraryExW",
    "LoadLibraryW",
    "LoadModule",
    "LoadResource",
    "LocalAlloc",
    "LocalCompact",
    "LocalFileTimeToFileTime",
    "LocalFlags",
    "LocalFree",
    "LocalHandle",
    "LocalLock",
    "LocalReAlloc",
    "LocalShrink",
    "LocalSize",
    "LocalUnlock",
    "LockFile",
    "LockFileEx",
    "LockResource",
    "MapViewOfFile",
    "MapViewOfFileEx",
    "MoveFileA",
    "MoveFileExA",
    "MoveFileExW",
    "MoveFileW",
    "MulDiv",
    "MultiByteToWideChar",
    "OpenEventA",
    "OpenEventW",
    "OpenFile",
    "OpenFileMappingA",
    "OpenFileMappingW",
    "OpenMutexA",
    "OpenMutexW",
    "OpenProcess",
    "OpenSemaphoreA",
    "OpenSemaphoreW",
    "OutputDebugStringA",
    "OutputDebugStringW",
    "PeekConsoleInputA",
    "PeekConsoleInputW",
    "PeekNamedPipe",
    "PrepareTape",
    "PulseEvent",
    "PurgeComm",
    "QueryDosDeviceA",
    "QueryDosDeviceW",
    "QueryPerformanceCounter",
    "QueryPerformanceFrequency",
    "RaiseException",
    "ReadConsoleA",
    "ReadConsoleInputA",
    "ReadConsoleInputW",
    "ReadConsoleOutputA",
    "ReadConsoleOutputAttribute",
    "ReadConsoleOutputCharacterA",
    "ReadConsoleOutputCharacterW",
    "ReadConsoleOutputW",
    "ReadConsoleW",
    "ReadFile",
    "ReadFileEx",
    "ReadProcessMemory",
    "ReleaseMutex",
    "ReleaseSemaphore",
    "RemoveDirectoryA",
    "RemoveDirectoryW",
    "ResetEvent",
    "ResumeThread",
    "RtlFillMemory",
    "RtlMoveMemory",
    "RtlZeroMemory",
    "ScrollConsoleScreenBufferA",
    "ScrollConsoleScreenBufferW",
    "SearchPathA",
    "SearchPathW",
    "SetCommBreak",
    "SetCommMask",
    "SetCommState",
    "SetCommTimeouts",
    "SetComputerNameA",
    "SetComputerNameW",
    "SetConsoleActiveScreenBuffer",
    "SetConsoleCP",
    "SetConsoleCtrlHandler",
    "SetConsoleCursorInfo",
    "SetConsoleCursorPosition",
    "SetConsoleMode",
    "SetConsoleOutputCP",
    "SetConsoleScreenBufferSize",
    "SetConsoleTextAttribute",
    "SetConsoleTitleA",
    "SetConsoleTitleW",
    "SetConsoleWindowInfo",
    "SetCurrentDirectoryA",
    "SetCurrentDirectoryW",
    "SetEndOfFile",
    "SetEnvironmentVariableA",
    "SetEnvironmentVariableW",
    "SetErrorMode",
    "SetEvent",
    "SetFileApisToOEM",
    "SetFileAttributesA",
    "SetFileAttributesW",
    "SetFilePointer",
    "SetFileTime",
    "SetHandleCount",
    "SetLastError",
    "SetLocalTime",
    "SetMailslotInfo",
    "SetNamedPipeHandleState",
    "SetPriorityClass",
    "SetProcessShutdownParameters",
    "SetStdHandle",
    "SetSystemTime",
    "SetTapeParameters",
    "SetTapePosition",
    "SetThreadContext",
    "SetThreadLocale",
    "SetThreadPriority",
    "SetTimeZoneInformation",
    "SetUnhandledExceptionFilter",
    "SetVolumeLabelA",
    "SetVolumeLabelW",
    "SetupComm",
    "SizeofResource",
    "Sleep",
    "SleepEx",
    "SuspendThread",
    "SystemTimeToFileTime",
    "TerminateProcess",
    "TerminateThread",
    "TlsAlloc",
    "TlsFree",
    "TlsGetValue",
    "TlsSetValue",
    "TransactNamedPipe",
    "TransmitCommChar",
    "UnhandledExceptionFilter",
    "UnlockFile",
    "UnlockFileEx",
    "UnmapViewOfFile",
    "UpdateResourceA",
    "UpdateResourceW",
    "VerLanguageNameA",
    "VerLanguageNameW",
    "VirtualAlloc",
    "VirtualFree",
    "VirtualLock",
    "VirtualProtect",
    "VirtualProtectEx",
    "VirtualQuery",
    "VirtualQueryEx",
    "VirtualUnlock",
    "WaitCommEvent",
    "WaitForDebugEvent",
    "WaitForMultipleObjects",
    "WaitForMultipleObjectsEx",
    "WaitForSingleObject",
    "WaitForSingleObjectEx",
    "WaitNamedPipeA",
    "WaitNamedPipeW",
    "WideCharToMultiByte",
    "WinExec",
    "WriteConsoleA",
    "WriteConsoleInputA",
    "WriteConsoleInputW",
    "WriteConsoleOutputA",
    "WriteConsoleOutputAttribute",
    "WriteConsoleOutputCharacterA",
    "WriteConsoleOutputCharacterW",
    "WriteConsoleOutputW",
    "WriteConsoleW",
    "WriteFile",
    "WriteFileEx",
    "WritePrivateProfileSectionA",
    "WritePrivateProfileSectionW",
    "WritePrivateProfileStringA",
    "WritePrivateProfileStringW",
    "WriteProcessMemory",
    "WriteProfileSectionA",
    "WriteProfileSectionW",
    "WriteProfileStringA",
    "WriteProfileStringW",
    "WriteTapemark",
    "_hread",
    "_hwrite",
    "_lclose",
    "_lcreat",
    "_llseek",
    "_lopen",
    "_lread",
    "_lwrite",
    "lstrcatA",
    "lstrcatW",
    "lstrcmpA",
    "lstrcmpW",
    "lstrcmpiA",
    "lstrcmpiW",
    "lstrcpyA",
    "lstrcpyW",
    "lstrlenA",
    "lstrlenW",
    "GetEnvironmentStringsW",
        ""
};
#endif

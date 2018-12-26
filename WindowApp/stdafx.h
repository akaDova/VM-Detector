// stdafx.h:

//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN           
// Windows headers
#include <windows.h>
#include <Winuser.h>

// crt headers
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// app headers
extern "C"
{
	__declspec(dllimport) BOOL __stdcall CheckByCPUID();
}

typedef BOOL(__stdcall *LPVMCheck)();

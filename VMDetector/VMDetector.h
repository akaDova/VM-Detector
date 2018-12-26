#pragma once
#include "stdafx.h"



extern "C" {
	// check by cpuid instruction
	__declspec(dllexport) BOOL __stdcall CheckByCPUID();
}
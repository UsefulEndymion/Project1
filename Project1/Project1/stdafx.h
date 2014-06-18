// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// WIC Headers and Libs
#include <wincodec.h>
#pragma (lib, "windowscodecs.lib")

// Direct2D Headers and Libs
#include <d2d1.h>
#pragma comment(lib, "d2d1.lib")

// DirectWrite Headers and Libs
#include <dwrite.h>
#pragma comment(lib, "dwrite.lib")

// Multimedia import library and header
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

// FMOD Headers and Libs
#include "fmod.hpp"
#include "fmod_errors.h"
#pragma comment(lib, "fmodex_vc.lib")

// TODO: reference additional headers your program requires here
#include <sstream>
#include <commdlg.h>
#include <process.h>
#include "Resource.h"
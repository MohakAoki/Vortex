#pragma once

#ifdef VX_PLATFORM_WINDOWS
	#ifdef VX_BUILD_DLL
		#define VORTEX_API _declspec(dllexport)
	#else
		#define VORTEX_API _declspec(dllimport)
	#endif
#else
	#error Vortex Only Supports Windows!
#endif
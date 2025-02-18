#pragma once

#ifdef BS_PLATFORM_WINDOWS
	#ifdef BS_BUILD_DLL
		#define BOREALIS_API __declspec(dllexport) 
	#else
		#define BOREALIS_API __declspec(dllimport)
	#endif
#else 
	#error Borealis only supports windows!
#endif

#define BIT(x) (1 << x)
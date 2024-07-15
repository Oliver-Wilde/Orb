#pragma once

#ifdef ORB_PLATFORM_WINDOWS
#ifdef ORB_BUILD_DLL
#define ORB_API __declspec(dllexport)
#else
#define ORB_API __declspec(dllimport)
#endif
#else
#error Orb only supports Windows!
#endif	
#pragma once

#ifdef ENGINE_EXPORTS
#define ENGINE_API _declspec(dllexport)
#else
#define ENGINE_API _declspec(dllimport)
#endif
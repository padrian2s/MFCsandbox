#pragma once

#ifdef MANAGERS_EXPORTS
#define MANAGERS_API __declspec(dllexport)
#else
#define MANAGERS_API __declspec(dllimport)
#endif

// Global managers error codes (user for i18n)


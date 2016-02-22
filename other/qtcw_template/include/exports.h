#ifndef EXPORTS_H
#define EXPORTS_H

#ifdef _WIN32
    #ifdef QTCW_LIBRARY
        #define QTCWSHARED_EXPORT __declspec(dllexport)
    #else
        #define QTCWSHARED_EXPORT __declspec(dllimport)
    #endif
#else
    #define QTCWSHARED_EXPORT
#endif

#ifdef __cplusplus
  #define QTCW_EXTERN_C_BEGIN extern "C" {
  #define QTCW_EXTERN_C_END }
#else
  #define QTCW_EXTERN_C_BEGIN
  #define QTCW_EXTERN_C_END
#endif

#endif // EXPORTS_H

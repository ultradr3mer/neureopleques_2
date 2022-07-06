#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(STTATIC_LIB)
#  define STTATIC_EXPORT Q_DECL_EXPORT
# else
#  define STTATIC_EXPORT Q_DECL_IMPORT
# endif
#else
# define STTATIC_EXPORT
#endif

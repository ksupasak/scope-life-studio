#ifndef SCOPELIFEHW_GLOBAL_H
#define SCOPELIFEHW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SCOPELIFEHW_LIBRARY)
#  define SCOPELIFEHW_EXPORT Q_DECL_EXPORT
#else
#  define SCOPELIFEHW_EXPORT Q_DECL_IMPORT
#endif

#endif // SCOPELIFEHW_GLOBAL_H

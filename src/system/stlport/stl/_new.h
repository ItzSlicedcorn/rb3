/*
 * Copyright (c) 1999
 * Boris Fomitchev
 *
 * This material is provided "as is", with absolutely no warranty expressed
 * or implied. Any use is at your own risk.
 *
 * Permission to use or copy this software for any purpose is hereby granted
 * without fee, provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 *
 */

#ifndef _STLP_INTERNAL_NEW
#define _STLP_INTERNAL_NEW

#ifndef _STLP_INTERNAL_CSTDDEF
// size_t
#  include <stl/_cstddef.h>
#endif

#include _STLP_NATIVE_CPP_RUNTIME_HEADER(new)

#  if defined (_STLP_USE_OWN_NAMESPACE)

_STLP_BEGIN_NAMESPACE

using _STLP_VENDOR_EXCEPT_STD::bad_alloc;

using _STLP_VENDOR_EXCEPT_STD::nothrow_t;
using _STLP_VENDOR_EXCEPT_STD::nothrow;

using _STLP_VENDOR_EXCEPT_STD::new_handler;
using _STLP_VENDOR_EXCEPT_STD::set_new_handler;

_STLP_END_NAMESPACE
#  endif /* _STLP_USE_OWN_NAMESPACE */

_STLP_BEGIN_NAMESPACE
inline void* __stl_new(size_t __n)   { return ::operator new(__n); }
inline void  __stl_delete(void* __p) { ::operator delete(__p); }
_STLP_END_NAMESPACE

#endif /* _STLP_INTERNAL_NEW */

/*
 * Local Variables:
 * mode:C++
 * End:
 */

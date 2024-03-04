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

#ifndef _STLP_INTERNAL_CSIGNAL
#define _STLP_INTERNAL_CSIGNAL

#include _STLP_NATIVE_CPP_C_HEADER(csignal)

_STLP_BEGIN_NAMESPACE
using _STLP_VENDOR_CSTD::signal;
using _STLP_VENDOR_CSTD::raise;
using _STLP_VENDOR_CSTD::sig_atomic_t;
_STLP_END_NAMESPACE

#endif /* _STLP_INTERNAL_CSIGNAL */

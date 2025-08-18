/**
 *
 * File to help pycparser python library with parsing the khronos headers.
 * By including this rather than the real stdint.h we can avoid errors
 * parsing system headers that pycparser doesn't understand.
 *
 * \see https://github.com/eliben/pycparser?tab=readme-ov-file#what-about-the-standard-c-library-headers
 */

#ifndef _FAKE_STDINT_H
#define _FAKE_STDINT_H

typedef int int8_t;
typedef int uint8_t;
typedef int int16_t;
typedef int uint16_t;
typedef int int32_t;
typedef int uint32_t;
typedef int int64_t;
typedef int uint64_t;

typedef int intptr_t;
typedef int uintptr_t;

#endif
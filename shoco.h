#pragma once

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

size_t shoco_compress(const char * const in, size_t len, char * const out, size_t bufsize);
size_t shoco_decompress(const char * const in, size_t len, char * const out, size_t bufsize);

#ifdef __cplusplus
}
#endif

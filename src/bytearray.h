#ifndef BYTEARRAY_H
#define BYTEARRAY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

#define DEFAULT_BYTEARRAY_ALLOC 2048

typedef struct {
    char *data;
    size_t len;
    size_t _alloc_len;
} bytearray_t;

bytearray_t* bytearray_new();
void bytearray_free(bytearray_t *ba);
int bytearray_append(bytearray_t *ba, const char *data, size_t len);
int bytearray_truncate_front(bytearray_t *ba, size_t trunc_amt);
int bytearray_truncate_back(bytearray_t *ba, size_t trunc_amt);
int bytearray_clear(bytearray_t *ba);

#endif

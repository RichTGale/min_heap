#ifndef CUSTOM_TYPE_H
#define CUSTOM_TYPE_H

#include <stdlib.h>
#include <stdint.h>

typedef struct custom_type_data* custom_type;

void custom_type_init(custom_type* ctp, uint64_t val);

void custom_type_free(custom_type* ctp);

uint64_t custom_type_get_val(custom_type ct);

uint64_t min_heap_get_val(void* ctp);

#endif

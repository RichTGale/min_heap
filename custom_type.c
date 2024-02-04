#include "custom_type.h"

struct custom_type_data {
    uint64_t val;
};

void custom_type_init(custom_type* ctp, uint64_t val)
{
    *ctp = (custom_type) malloc(sizeof(struct custom_type_data));
    (*ctp)->val = val;
}

void custom_type_free(custom_type* ctp)
{
    free(*ctp);
}

uint64_t custom_type_get_val(custom_type ct)
{
    return ct->val;
}

uint64_t min_heap_get_val(void* data_type)
{
    custom_type* my_custom_type = (custom_type*) data_type;;

    return (*my_custom_type)->val;
}

# min_heap
This is a minimum heap. It stores and arranges values into a binary-tree where the minimum value is at the very top, and is not a child of any other value.

## USAGE INSTRUCTIONS:
 
 1. The heap needs to be passed a pointer to a custom struct data-type. The value that the heap will sort should be contained in that struct:
```
custom_type.h
--------------------------------------------------
...

typedef struct custom_type_data* custom_type;

...
--------------------------------------------------
```
```
custom_type.c
--------------------------------------------------
...

struct custom_type_data {
    int value;
};

...
--------------------------------------------------
```
In the above example, the variable name of the type's property, ```value```, doesn't matter. It could be changed to anything. Additionally, the property's type could be changed to any number type, such as ```double```.

 2. A function must be written that accepts a pointer to a variable of type void as one of its parameters. The function should cast the pointer to your custom struct type, and then return the property the struct contains that the heap will use. The function needs to be named ```min_heap_get_val```:
```
custom_type.h
--------------------------------------------------
...

int min_heap_get_val(void* data_type);

...
--------------------------------------------------
```
```
custom_type.c
--------------------------------------------------
...

int min_heap_get_val(void* data_type)
{
    custom_type* ct = (custom_type*) data_type;

    return (*ct)->value;
}

...
--------------------------------------------------
``` 
 3. An include statement needs to be added to the file ```min_heap.h``` that includes your type:
```
min_heap.h
--------------------------------------------------
...

#include "custom_type.h"

...
--------------------------------------------------
```

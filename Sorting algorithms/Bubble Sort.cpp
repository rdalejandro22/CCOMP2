#include "Bubble Sort.h"
#include "Array Functions.h"
void bubble_sort(int *array, int size)
{
    bool change = true;
    while(change)
    {
        change = false;
        int count = 0;
        int *ptr = array;
        while(count < size)
        {
            if(*ptr > *(ptr + 1))
            {
                swap_0(ptr, ptr + 1);
                change = true;
            }
            ptr += 1;
            count++;
        }
    }
}


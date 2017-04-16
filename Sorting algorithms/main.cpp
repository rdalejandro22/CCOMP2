#include "Bubble Sort.h"
#include "Array Functions.h"
int main()
{
    /*int a = 5;
    int b = 8;
    int *ptr = &a;
    int *ptr1 = &b;
    swap_0(ptr, ptr1);
    cout << a;*/
    int c[] = {4,3,7,1,9,0};
    bubble_sort(c, sizeof(c)/sizeof(int));
    print_array(c, sizeof(c)/sizeof(int));
    return 0;
}

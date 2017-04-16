#include "Array Functions.h"
#include <iostream>
using namespace std;
void print_array(int *array, int size)
{
    int *ptr = array;
    for(int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << endl;
    }
}
void swap_0(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void swap_1(int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}

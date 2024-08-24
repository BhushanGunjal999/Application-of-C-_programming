#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    int Arr[5];   // It is a static memory Allocation

    int *p = NULL;
    p = (int *)malloc(sizeof(int) * 5);
                                           // using C 
    int *q = NULL;
    p = (int *)calloc(sizeof(int) , 5);

    int * x = NULL;
    x = new int[5];     // using c++

    free(p);
    free(q);

    delete [] x;


    return 0;
}
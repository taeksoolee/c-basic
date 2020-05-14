#include<stdio.h>

int main()
{
    int a = 10;
    printf("%d\n", a);
    printf("%p\n", &a);

    *&a = 30; // a = *&a
    printf("%d\n", a);
    printf("%p\n", &a);

//--------------------------------------------------------------------------
    int *ptr; // declear
    // int * ptr, int* ptr possible
    ptr = &a; // initalize

    printf("%d\n", *ptr);   // = *&a
    printf("%p\n", ptr);    // = &a
    
    *ptr = 20; // assignment
    printf("%d\n", *ptr);   //20
    printf("%d\n", a);      //20
    return 0;
}
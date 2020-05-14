//calloc : clear allocate
// auto initalize : 0
// used for arry pointer
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //type *  calloc(size_t m, size_t size);
    
    //n = (int *)malloc( 5*sizeof(int) );
    //n = (int *)calloc( 5, sizeof(int) );
    //n = (int *)calloc( 1, 5*sizeof(int) );
    int *ar, size, i;

    size = 5;

    ar = (int *)malloc(size*sizeof(int));

    for(i = 0; i < size; i++)
        ar[i] = i;

    for(i = 0; i < size; i++)
        printf("%d\t", ar[i]);

    printf("\n");

// realoc
    size = 10;
    ar = (int *)realloc(ar, size*sizeof(int));
    for(i = 5; i < size; i++)
        ar[i] = i;
    for(i = 0; i < size; i++)
        printf("%d\t", ar[i]);

    return 0;
}
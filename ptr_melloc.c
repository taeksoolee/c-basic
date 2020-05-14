//malloc : memory allocate
// reason : save heap memory, primitive type is saved stack memory
#include <stdio.h>
#include <stdlib.h> // melloc

int main()
{
    //type *  malloc(size_t size);
    int *value; // declear
    value = (int *)malloc(sizeof(int)); // initialize
    
    if(value == NULL){
        printf("fail to allocate memory!");
    }else{
        printf("success to allocate memory!");
    }
    return 0;
}
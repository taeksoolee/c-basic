#include <stdio.h>

int main(void)
{   
    int n = 7, i, j;
    for(int i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n; i > 0; i--){
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}
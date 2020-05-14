#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char ch;
    int i;
    FILE *fp; // FILE >> typeof struct _iobuf FILE
    // r :read, w : write, a : append
    fp = fopen("a.txt", "r"); // return pointer var

    if(fp == NULL)
    {
        printf("file not found");
        exit(1);
    }
    for(i = 0; i < 5; i++)
        ch = fgetc(fp);// 1char get
        
    printf("%c", ch);
    fclose(fp);

    return 0;
}

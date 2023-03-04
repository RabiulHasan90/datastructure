#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1, *ptr2;        ///malloc and callloc work dame but malloc 1 and calloc 32 kaj kore..
    ptr1=(int*)malloc(20);
    ptr2 = (int*)calloc(5, sizeof(int));
    if(ptr1==NULL || ptr2 == NULL)
    {
        printf("memory is not allocated");
    }
    else
    {
        printf("memory is allocated\n");   /// free mnane memory space free kore
        //free(ptr);
        ptr1 = realloc(ptr1, 50);
        printf("memory free succesfull\n");
    }
    return 0;

}

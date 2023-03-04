#include<stdio.h>

#define size 5

int main()
{
    int arr[size] = {1, 20, 5, 78, 30};
    int key, i,pos,element, index = -1;
      printf("Enter position and element\n");
    scanf("%d%d",&pos,&element);

    if(pos <= size && pos >= 0)
    {
        //shift all the elements from the last index to pos by 1 position to right
        for(i = size; i > pos; i--)
            arr[i] = arr[i-1];


        arr[pos] = element;

        /*
         * print the new array
         * the new array size will be size+1(actual size+new element)
         * so, use i <= size in for loop
         */
        for(i = 0; i <= size; i++)
            printf("%d ", arr[i]);
    }
    else
        printf("Invalid Position\n");


    printf("\nEnter element to delete\n");
    scanf("%d",&key);

    /*
     * iterate the array elements using loop
     * if any element matches the key, store the index
     */

    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        //shift all the element from index+1 by one position to the left
        for(i = index; i < size - 1; i++)
            arr[i] = arr[i+1];

        printf("New Array : ");
        for(i = 0; i < size - 1; i++)
            printf("%d ",arr[i]);
    }
    else
        printf("Element Not Found\n");

    return 0;
}

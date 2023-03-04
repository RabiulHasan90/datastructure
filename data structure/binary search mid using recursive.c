#include <stdio.h>
int binarys(int array[], int start, int end, int element){
   while (start <= end){
      int middle = start + (end- start )/2;   ///Rabiul Hasan 213902072
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start = middle + 1;
      else
         end = middle - 1;
   }
   return -1;
}
int main(void){
   int array[100];
   int n;
   printf("enter size of array: ");
   scanf("%d", &n);
   for(int i = 0; i < n; i++)
    scanf("%d", &array[i]);
   int element;
   printf("find the element: ");
   scanf("%d", &element);
   int result = binarys(array, 0, n-1, element);

   if(result ==  -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",result);
   }
   return 0;
}

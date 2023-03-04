#include<stdio.h>
#include <conio.h>
void sum()
{
    int row, column = 0;
   int sum, sum1, sum2;
   int flag = 0;
    sum = 0;
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++) {
         if (row == column)
            sum = sum + matrix[row][column];
      }
   }
}


int main() {

   int size = 3;
   int n;
   printf("enter input: ");
   scanf("%d %d", &n,&n);
   int matrix[n][n];

   int row, column = 0;
   int sum, sum1, sum2;
   int flag = 0;

   printf("\nPlease enter  input: ");
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++)
         scanf("%d", &matrix[row][column]);
         void sum();
   }





   for (row = 0; row < size; row++) {
      sum1 = 0;
      for (column = 0; column < size; column++) {
         sum1 = sum1 + matrix[row][column];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   for (row = 0; row < size; row++) {
      sum2 = 0;
      for (column = 0; column < size; column++) {
         sum2 = sum2 + matrix[column][row];

      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
    printf("\n\n sum of row and column= %d", sum2);

   if (flag == 1)
      printf("\n\n  This is a Lo Shu Magic Square\n");
   else
      printf("\n No Magic square");


   return 0;
}

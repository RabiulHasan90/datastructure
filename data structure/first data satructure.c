#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int x){
    if ( top < CAPACITY - 1){
        top = top +1;
        stack[top] = x;
        printf("push is: %d\n", x);
    }
    else
    {
        printf("enough");
    }



}
int pop()
{
    if(top>=0){
        int val = stack[top];
        top = top -1;
        return val;
    }
    printf("it is pop");
    return -1;
}
int peek()
{ if(top >= 0){
   return stack[top];

     }
     printf("yes it is peek");
    return -1;
}
int main()
{
    printf("succeccfully run");
    peek();
    push(10);
    push(20);
    push(30);
    printf("pop value us %d\n",pop());
    push(40);
    printf("the last or first number whos is return call = %d\n", peek());
    return 0;
}

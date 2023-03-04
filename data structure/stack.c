#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int x)
{
    if(top < CAPACITY -1){
        top = top +1;
    stack[top]=x;
    printf("the push number is %d\n", x);
    }
    else
        printf("not enough space!\n");
}
int pop()
{
    if(top >= 0)
    {
      int val = stack[top];
      top = top -1;
      return val;
    }
    printf("pop is empty!\n");
    return -1;
}
int peek()
{ if(top >= 0){
return stack[top];
}
printf("peek is empty!\n");
    return -1;
}
int main()
{
    printf("\nyes done~\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("the pop is: %d\n",pop());
    push(40);
    printf("the peek is %d: ", peek());
    return 0;
}

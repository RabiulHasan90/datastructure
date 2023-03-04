#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int item);
int pop();
int peek();
int isfull();
int isempty();
void display();
void main()
{
    int choice, item;
    while(1)
    {
        printf("\n1. push");
        printf("2. pop\n");
        printf("3. display the top element\n");
        printf("4. display the all element\n");
        printf("5. quite\n");
        printf("enter your choice ------\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("enter the item you push : ");
            scanf("%d", &item);
            push(item);
            break;


        }
    }
}

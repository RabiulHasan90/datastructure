#include <stdio.h>
#include <stdbool.h>
#define CAPACITY 5
int myqueue[CAPACITY];
int front = 0, rear = -1, totalitem;
bool isfull()
{
    if(totalitem == CAPACITY)
    {
        return true;
    }
    else
        return false;
}
bool isempty()
{
    if(totalitem == 0)
    {
        return true;
    }
    else
        return false;
}
void enqueue(int total)
{
    if(isfull())
    {
        printf("sorry, it is full!\n");
    }

        rear = (rear+1)%CAPACITY;
        myqueue[rear]=total;
        totalitem++;
    }
void printqueue()
{
    int i;
    printf("test queue!\n");
    for(i=0; i<CAPACITY; i++)
    {
        printf("%d", myqueue[i] );
    }
    printf("\n");
}
int main()
{
    printf("succecc!\n");
    enqueue(10);
    printqueue;

}

#include <stdio.h>
#include <stdbool.h>
#define CAPACITY 5
int myqueue[CAPACITY];
int front =0, rear = -1, totalitem;
bool isful()
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
    if(totalitem==0){
        return true;

    }
    else
        return false;
}
void enqueue(int total){
 if(isful())
 {
     printf("sorry the data is full!\n");
     return 0;
 }
 rear = (rear+1)%CAPACITY;
 myqueue[rear]=total;
 totalitem++;

}
void printqueue()
{
    int i;
    printf("queue!!!!!!!!!!!\n");
    for(i = ; i < CAPACITY; i++)
    {
        printf("%d", myqueue[i]);
    }
    printf("\n");

}
int dequeue()
{

}
int main()
{
    printf("main function---!\n");

    enqueue(10);
    printqueue();
    return 0;
}

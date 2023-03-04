#include <stdio.h>

struct Node *createlinkedlist(int arr[], int size);
struct Node{

   int data;
   struct Node *next;
};


int main()
{
    int a[]={5,10,15};
    struct Node *head;

    head = createlinkedlist(a, 3);
    while(head!=NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
    return 0;
}
struct Node *createlinkedlist(int arr[], int size)
{   struct Node *head=NULL, *temp=NULL, *current=NULL;

    for(int i=0; i<size; i++)
    {
     temp = (struct Node*)malloc(sizeof(struct Node));
     temp->data = arr[i];
     temp->next = NULL;
     if(head==NULL)
     {
         head=temp;
         current = temp;
     }
     else
     {
         current->next = temp;
         current = current->next;
     }
    }
    return head;
}

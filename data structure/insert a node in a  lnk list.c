#include<stdio.h>
#include<stdlib.h>

void insertbegining(struct node *head, int data);
struct node *createlinkedlist(int arr[], int size);
struct node
{
    int data;
    struct node *next;

};
int main()
{
    int a[]={43, 53, 67,88,99};

    struct node *head=NULL;
        head = createlinkedlist(a, 5);
       printlist(head);
       insertbegining(head, 500);
        return 0;

}
void insertbeginig(struct node *head, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=NULL;
    temp->next=head;
    struct node *newHead=temp;
    struct node *current = newHead;
    newHead=temp;
    printlist(newHead);
}
void printlist(struct node *head)
{
    struct node *current = head;
    while(current!=NULL){
            printf("%d->", current->data);
            current=current->next;
        }
        printf("NULL\n");
}


struct node *createlinkedlist(int arr[], int size)
{
    struct node *head=NULL, *temp=NULL, *current=NULL;
    int i;
    for(i=0;i<size;i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current = current->next;
        }
    }
    return head;
}

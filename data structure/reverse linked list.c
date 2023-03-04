#include <stdio.h>
#include <stdlib.h>
void reverselinkedlist(struct node *head);
struct node *createlinkedlist(int arr[], int size);
struct node
    {
        int data;

    struct node *next;

};
int main()
{

    int a[]={5, 34, 23};
    struct node *head = NULL;
    head=createlinkedlist(a, 3);
    struct node *newnode = head;
    while(head!=NULL)
    {
        printf("%d->", head->data);
        head=head->next;
    }
    printf("NULL\n");
    reverselinkedlist(newnode);
    return 0;



}
void reverselinkedlist(struct node *head)
{
    struct node *prev=NULL, *current=head, *next=NULL;
    while(current!=NULL)
    {
        //store the next node
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    head=prev;
    while(head!=NULL)
    {
        printf("%d->", head->data);
        head=head->next;
    }
    printf("NULL\n");
}
struct node *createlinkedlist(int arr[], int size){
    struct node *head=NULL, *temp=NULL, *current=NULL;
    int i;
    for(i=0; i<size; i++)
    {
        temp =(struct node*)malloc(sizeof(struct node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }
    return head;

}


#include <stdio.h>
#include <stdlib.h>
struct node *createlinkedlist(int arr[], int size);
int searchlinkedlist(struct node *head, int value);
struct node
{
    int data;
    struct node *next;
};
int searchlinkedlist(struct node *head, int value)
{
    int index= 1;

    while(head!=NULL)
    {
        if(head->data==value)
        {
            return index;
        }
        index++;
        head=head->next;
    }
    return -1;
}
int main()
{
    struct node *head=NULL;

    int a[]={32, 56 , 687 , 78,44};
    head = createlinkedlist(a, 5);
    struct node *current = head;
    int value;
    printf("searh an element: ");

    scanf("%d", &value);
   printf("index: %d", searchlinkedlist(head, value));
    return 0;


}
struct node *createlinkedlist(int arr[], int size)
{
    struct node *head=NULL, *temp=NULL, *current=NULL;
    int i;
    for(i = 0; i<size;i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current = temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }
    return head;

};

 #include <stdio.h>
#include <stdlib.h>
struct node{

   int data;
   struct node *next;

}*head=NULL;
void insertbegining(int value)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(head==NULL)
    {
        newnode->next=NULL;
        head=newnode;

    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    printf("\n one node inserted \n");
}
void insertend(int value)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head = newnode;

    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
    }
    printf("\none node inserted\n");
}
void display()
{
    if(head==NULL)
    {
        printf("\nlist is empty\n");
    }
    else
    {
        struct node *temp=head;
        printf("\nlist element are: ");
        while(temp->next!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->next;
        }
        printf("%d-->NULL",temp->data);
    }
}
int main()
{
    int choice,value,choice1,loc1,loc2;
    while(1)
    {
        mainMenu:printf("\nmenu\nn1. insert\n2. display\n3. exit\n enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value to be incerted");
            scanf("%d", &value);
            while(1)
            {
                printf("where you want to insertted: \n1. begining\'n2. end\n enter your choice: ");
                scanf("%d",&choice1);
                switch(choice1)
                {
                case 1:
                    insertbegining(value);
                    break;
                case 2:
                    insertend(value);
                    break;
                    default:
                        printf("\nwrong input\n");
                        goto mainMenu;
                }
                goto subMenuEnd;
            }
            subMenuEnd:
                break;
                case 2:
                    display();
                    break;
                case 3:
                    exit(0);
                    break;
                default:
                    printf("wrong input");
        }
    }
    return 0;
}

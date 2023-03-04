#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

}*head = NULL;
void  insertelementatbegining(int value){

   struct node *newnode;
   newnode= (struct node*)malloc(sizeof(struct node));
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
   printf("\n one node inserted\n");


}
void insertend(int value)
{
    struct node *newnode;
    newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next=newnode;
    }
    printf("\n one node inserted\n");
}
void display()
{
    if(head==NULL)
    {
        printf("\n list is emp[ty\n");
    }
    else
    {
        struct node *temp=head;
        printf("list elrment are: \n");
        while(temp->next !=NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d---->NULL", temp->data);
    }
}
int main()
{
    int choice, value, loc1, loc2, choice1;
    while(1)
    {
        mainMenu: printf("\n\n***MENU***\n1. insert\n2. display\n3. exit\n enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("enter the value to be unbserted: ");
            scanf("%d", &value);
            while(1)
            {
                printf("where you want to insert: \n1. at begin igng\n2. at end\n enter your choice ");
                scanf("%d", &choice1);
                switch(choice1)
                {
                case 1:
                    insertelementatbegining(value);
                    break;
                    case 2:
                        insertend(value);
                        break;
                        default:
                            printf("\nwront input\n");
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
                    default:
                        printf("\nwrong input\n");

        }
    }
    return 0;
}

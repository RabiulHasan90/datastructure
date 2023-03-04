#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int rno;
    char name[20];
    struct subject{
        int scode;
        char name[20];
        int mark;

    }sub[3];
    int total;
    float per;
}student;
void create(){
 student *s;
 FILE *fp;
 int n, i, j;
 printf("Enter rhow many student you want: ");
 scanf("%d", &n);
 s=(student*)calloc(n, sizeof(student));
 fp = fopen("mystudents.txt","w");
 for(i=0; i<n; i++)
 {
     s[i].total=0;
     s[i].per=0;
     printf("enter roll number: ");
     scanf("%d", &s[i]);
     fflush(stdin);
     printf("enter name: ");
     scanf("%[^\n]s",s[i].name);
     for(j=0; j<3; j++)
     {
         printf("enter marks of subject%d: ", j+1);
         scanf("%d",&s[i].sub[j].mark);
         s[i].total+=s[i].sub[j].mark;
     }
     s[i].per=s[i].total/3.0;
     fwrite(&s[i], sizeof(student),1,fp);
 }
 fclose(fp);

}
void display(){
   student s1;
    FILE *fp;
    int j;
    fp = fopen("mystudents.txt","r");
    while(fread(&s1,sizeof(student),1,fp))
    {
        printf("\n%-5d%-20s",s1.rno,s1.name);
        for(j=0;j<3;j++)
        {
            printf("%4d",s1.sub[j].mark);
        }
        printf("%5d%7.2f",s1.total,s1.per);
    }
    fclose(fp);
}
void append(){

student *s;
 FILE *fp;
 int n, i, j;
 printf("Enter rhow many student you want: ");
 scanf("%d", &n);
 s=(student*)calloc(n, sizeof(student));
 fp = fopen("mystudents.txt","a");
 for(i=0; i<n; i++)
 {
     s[i].total=0;
     s[i].per=0;
     printf("enter roll number: ");
     scanf("%d", &s[i]);
     fflush(stdin);
     printf("enter name: ");
     scanf("%[^\n]s",s[i].name);
     for(j=0; j<3; j++)
     {
         printf("enter marks of subject%d: ", j+1);
         scanf("%d",&s[i].sub[j].mark);
         s[i].total+=s[i].sub[j].mark;
     }
     s[i].per=s[i].total/3.0;
     fwrite(&s[i], sizeof(student),1,fp);
 }
 fclose(fp);

}
void noofrec()
{
    student s1;
    FILE *fp;
    fp = fopen("mystudents.txt", "r");
    fseek(fp, 0 , SEEK_END);
    int n=ftell(fp)/sizeof(student);
    printf("\n\n NO OF RECORDS = %d", n);
    fclose(fp);

}
void search()
{
   student s1;
    FILE *fp;
    int j,rno;
    fp = fopen("mystudents.txt","r");
    printf("enter roll no search: ");
    scanf("%d",&rno);
    while(fread(&s1,sizeof(student),1,fp))
    {
        if(s1.rno == rno){
        printf("\n%-5d%-20s",s1.rno,s1.name);
        for(j=0;j<3;j++)
        {
            printf("%4d",s1.sub[j].mark);
        }
        printf("%5d%7.2f",s1.total,s1.per);
    }
    }
    fclose(fp);
}
void update()
{
    student s1;
    FILE *fp, *fp1;
    int j, rno, found=0;
    fp=fopen("mystudents.txt","r");
    fp1=fopen("temp.txt","w");
    printf("enter roll number to update: ");
    scanf("%d",&rno);
    while(fread(&s1,sizeof(student),1,fp))
    {
        if(s1.rno==rno)
        {
            found=1;
            fflush(stdin);
            printf("entr new name: ");
            scanf("%[^n]s",s1.name);
            for(j=0;j<3;j++){
                printf("enter new mark of object: ",j+1);
                scanf("%d",&s1.sub[j].mark);
                s1.total+=s1.sub[j].mark;
            }
            s1.per=s1.total/3.0;
        }
 fwrite(&s1.sizeof(student),1,fp1);
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        fp1=fopen("temp.txt","r");
        fp=fopen("mystudents.txt","w");
        while(fread(&s1,sizeof(student),1,fp1))
        {
            fwrite(&s1,sizeof(student),1,fp1);
        }
        fclose(fp);
        fclose(fp1);
    }
    else
        printf("\record not found\n");

}
int main()
{
    system("color 5f");

    int ch;
    do{
            printf("\n1. CREATE");
    printf("\n2. DISPLAY");
    printf("\n3. APPEND");
    printf("\n4. NO OF RECORDS");
    printf("\n5. SEARCH");
    printf("\n6. UPDATE");
    printf("\n0. EXIT");
    printf("\nenter your choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        append();
        break;
    case 4:
        noofrec();
        break;
    case 5:
        search();
        break;
    case 6:
        update();
        break;
    }

    }while(ch!=0);
}

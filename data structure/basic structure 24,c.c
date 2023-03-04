#include <stdio.h>
struct stu{

int id;
float cgpa;
char name[50];
};
int main()
{
    struct stu s;
    printf("enter your id: ");
    scanf("%d", &s.id);
    printf("enter your cgpa: ");
    scanf("%f", &s.cgpa);
    printf("enter youur name : ");
    scanf("%s", &s.name);
    printf("your name: %s", s.name);


}

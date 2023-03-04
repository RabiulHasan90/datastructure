#include <stdio.h>
int main()
{
    //int n = 20;
    //int *ptr;
    //ptr= &n;
    //printf("%d\n",  n);
    //printf("%d\n", *ptr);
    //printf("%p", ptr);
   /* char ch= 'a';
    char *ptr;
        ptr = &ch;
        printf("%c\n", ch);
        printf("%c", *ptr);
    return 0;
    */
    int x, y , z;
    printf("print 3 value: ");
    scanf("%d %d %d", &x,&y,&z);
    int *p1, *p2, *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;
    if(*p1 > *p2 && *p1 > *p2)
    {
        printf("p1 is big number: %d", *p1);
    }
    else if(*p2 > *p1 && *p2 > *p3)
    {
        Printf("p2 is big nbumber: %d", *p2);
    }
    else{
        printf("p3 is big number: %d", *p3);
    }

    return 0;
}

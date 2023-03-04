#include<stdio.h>
int main()
{
    int i,find, mid, n, low, high;
    int arr[100];
    printf("print size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    printf("enter value to find ");
    scanf("%d", &find);
    low = 0;
    high = n-1;
    mid = (low + high)/2;
    while(low <= high)
    {

        if(arr[mid]<find)
            low = mid+1;
        else if(arr[mid]==find)
        {
            printf("%d found at loca %d", find, mid+1);
            break;
        }
        else
            high = mid+1;
        mid = (low+high)/2;

    }
    if(low > high)
        printf("not found %d", n);
    return 0;
}

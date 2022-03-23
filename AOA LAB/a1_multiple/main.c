#include <stdio.h>
#include <time.h>
void main()
{
    int arr[10],n,key;
    printf("Enter size : ");
    scanf("%d",&n);
    printf("enter %d elements : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter key : ");
    scanf("%d",&key);
    for (int i=0;i<n;i++)
    {
        if (arr[i]%key==0)
            printf("%d is a multiple\n ",arr[i]);
        else
            printf("NO multiple");
            break;
    }
}

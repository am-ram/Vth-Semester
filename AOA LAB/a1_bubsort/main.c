#include <stdio.h>
#include <stdlib.h>
void bubsort(int arr[],int n)
{
    int temp;
 for(int i=0;i<n-1;i++)
    {
            for(int j=0;j<n/2;j++)
            {

                if (arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
    }
   for(int j=n/2;j<n-1;j++)
    {
        if (arr[j]>arr[j+1])
                {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
    }

}
void main()
{
    int n,arr[15];
    printf("Enter aize: ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubsort(arr,n);
    for (int i=0;i<n;i++)
        printf("%d\t",arr[i]);

}

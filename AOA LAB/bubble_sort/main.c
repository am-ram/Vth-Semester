#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void main()
{
    clock_t s,e,t;
    int arr[20],i,temp,j,n;

    printf("enter size of array : ");
    scanf("%d",&n);
    printf("enter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    s=clock();

   for (i = 0; i < n-1; i++)

       for (j = 0; j < n-i-1; j++)

            swap(&arr[j],&arr[j+1]);
                /*if (arr[j]>arr[j+1])
                {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }*/


    e=clock();
    t=(e-s)/CLOCKS_PER_SEC;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("time taken = %ld ",t);
}


#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void main()
{
    clock_t s,e,t;
    int arr[50],i,n,j,min_ind,temp;

    printf("enter size : ");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(int k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }

    s=clock();
    for(i=0;i<n-1;i++)
    {
        min_ind=i;

       for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
            swap(&arr[min_ind],&arr[i]);
        }
    }
    e=clock();

    for( int a=0;a<n;a++)
    {
        printf("%d\n",arr[a]);
    }
    t=(e-s)/CLOCKS_PER_SEC;
    printf("total time is = %ld\n",t);

}

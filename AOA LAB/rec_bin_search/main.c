#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int binsearch(int key,int low,int high,int arr[])
{
    int mid;
   if (high>=1)
   {
       mid = low +(high-1)/2;
       if (arr[mid]==key)
            return mid;
       if (arr[mid]>key)
            return binsearch(key, low, mid - 1, arr);
       if (arr[mid]<key)
            return binsearch(key, mid+1,high , arr);
    return binsearch(key, mid + 1,high,key);
   }
   return 0;
}
void main()
{
   clock_t s,e,t;
    int n,arr[10],i,j,key;
    printf("enter size of array :");
    scanf("%d",&n);
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter search key :");
    scanf("%d",&key);
   int low=1,mid,high=n+1,res;
    s=clock();
    res = binsearch(key,low,high,arr);
    e=clock();
    t=(e-s)/CLOCKS_PER_SEC;
    printf("Element is in index %d\n",res);
    printf("time taken = %ld",t);
}

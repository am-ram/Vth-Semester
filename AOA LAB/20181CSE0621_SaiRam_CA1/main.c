#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selsort(int arr[],int n)
{
    int min;
    for(int i=0;i<=n-2;i++)
    {
        min=i;

       for (int j=i+1;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            if(min!=i)
            {
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }

        }

}
int binsearch(int key,int low,int high,int a[])
{
    int mid;
   if (high>=1)
   {
       mid = low +(high-1)/2;
       if (a[mid]==key)
            return mid;
       if (a[mid]>key)
            return binsearch(key, low, mid - 1, a);
       if (a[mid]<key)
            return binsearch(key, mid+1,high , a);
    return binsearch(key, mid + 1,high,key);
   }
   return 0;
}
void main()
{
    clock_t s,e,s1,e1;
    int arr[100],i,n,j,min,temp;
    int a[100],size,key;
    printf("enter size : ");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(int k=0;k<n;k++)
        scanf("%d",&arr[k]);
    s=clock();
    selsort(arr,n);
    e=clock();
    for (i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("TIme for selection sort=%ld",(e-s)/CLOCKS_PER_SEC);
    printf("Selection sort completed\n");

    printf("Enter size of binary search array : ");
    scanf("%d",&size);
    printf("Enter %d elements : ",size);
    for(j=0;j<n;j++)
        scanf("%d",a[i]);
    printf("ENter search key : ");
    scanf("%d",&key);
    int low=1,mid,high=n+1,res;
    s1=clock();
    res = binsearch(key,low,high,arr);
    e1=clock();
    printf("Element is in index %d\n",res);
    printf("time taken for binary search = %ld",(e1-s1)/CLOCKS_PER_SEC);

}

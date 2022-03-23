#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int linsea(int arr[],int n,int key)
{
    clock_t s,e,t;
    int i,count=0;
    s=clock();

    for(i=0;i<n;i++)
    {
        if (arr[i]==key)
           {printf("found");break;}
           count+=1;

    }
    printf("COunt = %d",count);
 e=clock();
}




void main()
{
    clock_t s,e,t;
   int arr[25],n,key;
   printf("enter size :");
   scanf("%d",&n);
   printf("enter elements in the array:") ;

   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("element to be found: ");
   scanf("%d",&key);

    int result = linsea(arr, n, key);
t=(e-s)/CLOCKS_PER_SEC;
    printf("time = %ld",time);
    //return 0;

}

#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    if (n==0 || n==1)
        return 1;
    else
        return (n*fact(n-1));
}
void linsea(int sea[],int n,int res)
{
    for (int i=0;i<n;i++)
    {
        if (sea[i]==res)
            printf("Found");

    }
}
void main()
{
    int n,m,sea[10],arr[10],max,res;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("Max element = %d\n",max);
    res= fact(max);
    printf("Factorial of max = %d\n",res);
    printf("ENter sixe of search array : ");
    scanf("%d",&m);
    printf("\nENTer %d elements : ",m);
    for (int i=0;i<m;i++)
        scanf("%d",&sea[i]);
    linsea(sea,m,res);
}

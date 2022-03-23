#include<stdio.h>
#include<time.h>
void bubblesort_asc(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void bubblesort_desc(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void main()
{
    int n;
    clock_t s,e,t;
    printf("enter number of elements (greater than 10 and should be even)\n");
    scanf("%d",&n);
    if(n>10 && n%2==0)
    {
    int a[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int a1[n/2],a2[n/2];
    for(int i=0;i<n/2;i++)
    {
        a1[i]=a[i];
        a2[i]=a[i+n/2];
    }
    s=clock();
    printf("the array is\n");
    for(int i=0;i<n/2;i++)
    {
        printf("%d\t",a1[i]);
    }
    printf("\t\t");
    for(int i=0;i<n/2;i++)
    {
        printf("%d\t",a2[i]);
    }
    printf("\n");
    bubblesort_asc(a1,n/2);
    bubblesort_desc(a2,n/2);
    e=clock();
    t=(e-s)/CLOCKS_PER_SEC;
    printf("sorted elements of array are\n");
    for(int i=0;i<n/2;i++)
    {
        printf("%d\t",a1[i]);
    }
    printf("\t\t");
    for(int i=0;i<n/2;i++)
    {
        printf("%d\t",a2[i]);
    }
    printf("\n");
    printf("time taken is %ld\n",t);
    }
    else
        printf("size of array is either less than 10 or is not even, hence program terminated\n");
}

/*#include <stdio.h>
#include<time.h>
void main()
{
    clock_t s,e,t;
    int i,n;
    printf("enter size: ");
    scanf("%d",&n);
    int arr[10];
    printf("enter %d elements :",n);
    for(i = 0;i<=n;i++)
    {
        scanf("%f",&arr[i]);
    }
    s=clock();
    float max = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    e=clock();
    t=(e-s)/CLOCKS_PER_SEC;
    printf("Max = %f",max);
    printf("time: %ld",t);

}*/
#include<stdio.h>
#include<time.h>
void main()
{
int a[15],max,n;
clock_t start, end, total;
printf("Enter size : ");
scanf("%d",&n);
    printf("Enter %d values:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        start=clock();max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
        end =clock();
    total=(end-start)/CLOCKS_PER_SEC;
printf("Largest number is %d\n",max);
printf("Time taken %ld", total);

}


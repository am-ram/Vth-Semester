#include<stdio.h>
#include<time.h>
void main()
{
    int n,key;
    clock_t s,e;
    int flag=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key element\n");
    scanf("%d",&key);
    s=clock();
    for(int i=0;i<n;i++)
    {
        if(a[i] % key==0)
        {
            flag=1;
            printf("multiple of %d found in the array at index %d\n",key,i);
        }
    }
    e=clock();
    if(flag==0)
        printf("neither key nor multiple of key is present in the array\n");
    printf(("total time taken is %ld\n",(e-s)/CLOCKS_PER_SEC));
}


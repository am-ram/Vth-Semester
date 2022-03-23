#include<stdio.h>
#include<time.h>
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return (n*fact(n-1));
}
void main()
{
    int m,n,r;
    clock_t s,e;
    printf("enter m,n and r\n");
    scanf("%d%d%d",&m,&n,&r);
    if(r<=m && r<=n)
    {
    s=clock();
    int x=fact(m-r);
    int y=fact(n-r);
    float result=x/y;
    e=clock();
    printf("time taken is %lu\n",(e-s)/CLOCKS_PER_SEC);
    printf("the result is %lf\n",result);
    }
    else
        printf("factorial of negative number is not possible\n");
}


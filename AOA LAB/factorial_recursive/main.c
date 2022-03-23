#include <stdio.h>
#include <stdlib.h>
#include <time.h>
clock_t s,e,t;

int fact(int n)
{
    if (n==0 ||n==1)
        return 1;
    else
        return (n*fact(n-1));
}

void main()
{
    int n,res,req;
    printf("enter a number : ");
    scanf("%d",&n);
    s=clock();
    res=(fact(n));
    req=res/n;
    e=clock();
    printf("factorial of %d is = %d\n",n,res);
    printf("result = %d ",req);
    t=(e-s)/CLOCKS_PER_SEC;
    printf("time = %ld",t);

}

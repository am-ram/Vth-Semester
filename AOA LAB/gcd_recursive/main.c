#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcd(int x,int y)
{
    if (y==0)
        return x;
    else
        return gcd(y,x%y);
}



void main()
{
    clock_t s,e,t;
    int x,y,res;
    printf("enter x and y to find gcd : ");
    scanf("%d%d",&x,&y);
    s=clock();
    res = gcd(x,y);
    e=clock();
    printf("GCD of %d and %d is %d\n",x,y,res);

    t=(e-s)/CLOCKS_PER_SEC;
    printf("Time = %ld",t);
}

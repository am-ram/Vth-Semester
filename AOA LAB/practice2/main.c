#include<stdio.h>
#include<time.h>
int gcd(int m,int n)
{
    if(n==0)
    {
        return m;
    }
    else
        return(n,m%n);
}

void main()
{
    int a,b,c,x,y,res;
    clock_t s,e;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    s=clock();
    x=gcd(a,b);
    y=gcd(b,c);
    res=gcd(x,y);
    e=clock();
    printf("time taken is %ld\n",(e-s)/CLOCKS_PER_SEC);
    printf("gcd of %d,%d and %d is %d\n",a,b,c,res);
}

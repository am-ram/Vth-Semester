#include<stdio.h>
#include<time.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    gcd(b,a%b);
}
int main(void)
{
    int a,b,c,res;
    clock_t s,e;
    printf("Enter three numbers :\n");
    scanf("%d%d%d",&a,&b,&c);
    s=clock();

    res=gcd(a,gcd(b,c));

    e=clock();
    printf("GCD of (%d,%d,%d) =  %d\n",a,b,c,res);


    printf("Time taken = %ld",((e-s)/CLOCKS_PER_SEC));
}

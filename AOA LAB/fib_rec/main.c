#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fib(n-1) + fib(n-2));

}
void main()
{
    int n;
    clock_t e,s;
    printf("Enter number : ");
    scanf("%d",&n);
    s=clock();
    int res = fib(n);
    e=clock();
    printf("Fibonacci series until %d th term = %d\n",n,res);
    printf("Time = %ld ",(e-s)/CLOCKS_PER_SEC);
}

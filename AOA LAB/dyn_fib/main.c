#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fib(int n)
{
        int arr[n+2] ;
        arr[0]=0;
        arr[1]=1;
        for (int i=2;i<=n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
}
void main()
{
    clock_t e,s;
    int n,res;
    printf("Enter number to get sum of series : ");
    scanf("%d",&n);
    s=clock();
    res=fib(n);
    e=clock();
    printf("Res = %d\n",res);
    printf("Time = %ld",(e-s)/CLOCKS_PER_SEC);


}

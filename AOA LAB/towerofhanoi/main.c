#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void toh(int n,char from,char to, char temp)
{
    if(n==1)
    {
        printf("move disk from %c to %c",from,to);
        return;
    }
        toh(n-1,from,temp,to);
        printf("\n move disk%d from %c to %c",n,from,to);
        toh(n-1,temp,to,from);

}


void main()
{
    clock_t s,e,t;
    int n;
    printf("enter number of disks : ");
    scanf("%d",&n);
    s=clock();
    toh(n,'a','c','b');
    e=clock();
    t=(e-s)/CLOCKS_PER_SEC;
    printf("time taken = %ld",t);
}

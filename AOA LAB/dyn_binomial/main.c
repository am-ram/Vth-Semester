#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int min(int x,int y)
{
    return (x < y) ? x : y;
}
int binomial(int n,int k)
{
    int i,j;
    int c[40][30];
    for(i=0;i<=n;i++)
    {
            for(j=0;j<=min(i,k);j++)
            {
                if(j==0 || j==i)
                {
                    c[i][j]=1;
                   printf("%d\t",c[i][j]);
                }
            else
                {c[i][j]=c[i-1][j]+c[i-1][j-1];
                printf("%d\t",c[i][j]);}
            }
            printf("\n");
    }
    return c[n][k];
}
void main()
{
    clock_t e,s;
    int res,n,k;
    printf("Enter n & K : ");
    scanf("%d%d",&n,&k);
    s=clock();
    res=binomial(n,k);
    e=clock();
    printf("C(%d,%d) = %d\n",n,k,res);
    printf("Time = %ld",(e-s)/CLOCKS_PER_SEC);

}

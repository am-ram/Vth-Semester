#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int val[20],wt[20],v[10][10],i,j,c,n;
/*int max(int a, int b)
{
    return (a >= b) ? a : b;
}
*/
int max(int a ,int b)
{
    if (a>b)
        return a;
    else
        return b;
}
/*int knapsack(int i , int j)
{
    int value;
    if (v[i][j]<0)
    {
        if(j-wt[i]>=0)
        {
            value=max(knapsack(i-1,j),(val[i]+knapsack(i-1,j-wt[i])));
        }
        else
        {
            value = knapsack(i-1,j);
        }
        v[i][j]=value;
    }
    return v[i][j];
}*/
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n + 1][W + 1];

    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1]
                          + K[i - 1][w - wt[i - 1]],
                          K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    return K[n][W];
}


void main()
{
    int profit;
    clock_t e,s;
    int val[50],wt[50];
    printf("Enter number of values : ");
    scanf("%d",&n);

    printf("Enter capacity : ");
    scanf("%d",&c);

     printf("Enter %d weights : ",n);
    for(i=1;i<=n;i++)
        scanf("%d",&wt[i]);

    printf("Enter %d values : ",n);
    for(i=1;i<=n;i++)
        scanf("%d",&val[i]);
    s=clock();
    for (i=0;i<=n;i++)
    for(j=0;j<=c;j++)
        if (i==0||j==0)
            {
                v[i][j]=0;
            }
                //profit = knapsack(n,c);
                profit = knapSack(c,wt,val,n);
    e=clock();
    printf("Profit = %d\n",profit);
    printf("time = %ld",(e-s)/CLOCKS_PER_SEC);
}
// 3 2 1 4 5
// 20 25 15 40 50

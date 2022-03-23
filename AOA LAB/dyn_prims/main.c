#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int min,mincost=0,cost[10][10],visited[10]={0};
int i,j,a,b,u,v,n,ne=1;
clock_t e,s;
void main()
{
 printf("Enter no. of vertices : ");
 scanf("%d",&n);
 printf("Enter the adj.matrix : \n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   {
    scanf("%d",&cost[i][j]);
    if(cost[i][j]==0)
	cost[i][j]=999;
   }
printf("The edges of spanning tree are :-\n");
visited[1]=1;
s=clock();
while(ne<n)
{
	for(i=1,min=999;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
            if(cost[i][j]<min)
            {
            if(visited[i]==0)
                continue;
            else
              {
                min = cost[i][j];
                a=u=i;
                b=v=j;
              }
	        }
	     }
    }

	if (visited[v]==0)
	{
        printf("\n\tEdge\t(%d,%d)=%d\n",a,b,min);
        mincost+=min;
        visited[b]=1;
	}
	cost[a][b]=cost[b][a]=999;
	  ne++;
}
e=clock();
printf("\nMinimum cost = %d ",mincost);
printf("\nTime taken = %ld \n",(e-s)/CLOCKS_PER_SEC);

}


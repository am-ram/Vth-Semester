#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n,a,b,u,v,i,j,mincost=0,min,ne=1,cost[10][10],parent[10];
clock_t e,s;

void main()
{
printf("Enter no. of vertices : ");
scanf("%d",&n);
printf("Enter adj. cost matrix : \n");
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		scanf("%d",&cost[i][j]);
		if(cost[i][j]==0)
			cost[i][j]=999;
	}
/*printf("Matrix :-\n");
for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
{
    printf("%d\t__|",cost[i][j]);
}printf("\n");}*/
printf("\nEdges of Spanning Tree :- \n");
s=clock();
while(ne<n)
{
	for(i=1,min=999;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
		while(parent[u])
			u=parent[u];
		while(parent[v])
			v=parent[v];
	if(u!=v)
	{
	printf("\n\t\tEdge(%d,%d) = %d",a,b,min);
	mincost+=min;
	parent[v]=u;
	}
	cost[a][b]=cost[b][a]=999;}}
	ne++;
}
e=clock();
printf("\nMinimum cost = %d ",mincost);
printf("\nTime taken = %ld \n",(e-s)/CLOCKS_PER_SEC);
}

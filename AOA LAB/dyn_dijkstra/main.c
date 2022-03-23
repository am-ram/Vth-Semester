#include <stdio.h>
#include <stdlib.h>
#include <time.h>
clock_t e,s;
void main()
{
	int visited[25],i,k,w,v,min;
	int n,sv,j,dist[10],cost[20][20];
	printf("Enter no. of vertices : ");
	scanf("%d",&n);
	printf("Enter matrix :\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]==999;
		}
	printf("Enter source : ");
	scanf("%d",&sv);
s=clock();
	for(i=1;i<=n;i++)
	{
	  visited[i]=0;
	  dist[i]=cost[sv][i];
	}
 	visited[sv]=1;
	dist[sv]=1;
	for(k=2;k<=n;k++)
	{
	  min=999;
	  for(w=1;w<=n;w++)
	  if(dist[w]<min && visited[w]==0)
	  {
		min=dist[w];
		v=w;
	   }
	visited[v]=1;
	for(w=1;w<=n;w++)
	if(dist[v]+cost[v][w]<dist[w])
	 dist[w]=cost[v][w]+dist[v];
	}
  printf("Shortest Path :-\n");

      for(j=1;j<=n;j++)
      {
        if(j!=sv)
        printf("\t\t%d -> %d = %d\n",sv,j,dist[j]);
      }

e= clock();
printf("Total Time taken = %ld",(e-s)/CLOCKS_PER_SEC);
}

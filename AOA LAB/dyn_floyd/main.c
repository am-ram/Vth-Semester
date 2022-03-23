#include <stdio.h>
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

void floyd(int a[10][10],int n)
{
  int k,i,j;
  for(k=1;k<=n;k++)
   {
 	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
		{
		if(i==j){
 	 	a[i][j]=0;}
		else
		{ a[i][j]=min(a[i][j],a[i][k]+a[k][j]);}
		}
	}
   }
}
void main()
{ int a[10][10],n,e,u,v,i,j,w;
  printf("Enter no. of vertices :");
  scanf("%d",&n);
  printf("Enter no. of edges:");
  scanf("%d",&e);
  for(i=1;i<=n;i++)
  {
	for(j=1;j<=n;j++)
	  a[i][j]=999;
  }
  for(i=1;i<=e;i++)
  {
	printf("Enter %d source,dest,weight:",i);
	scanf("%d%d%d",&u,&v,&w);
  	a[u][v]=w;
  }
  printf("Input matrix is \n");
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n;j++)
     printf("%d | \t",a[i][j]);
     printf("\n");
  }

floyd(a,n);

printf("OUTPUT = \n");
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n;j++)
     printf("%d | \t",a[i][j]);
     printf("\n");
  }
printf("Shortest paths are : \n");
for(i=1;i<=n;i++)
  {
     for(j=1;j<=n;j++)
     {
      if(i!=j){
      printf("\n <%d,%d>=%d\n",i,j,a[i][j]);}
     }
  }
}

#include<stdio.h>
#include<time.h>
#define int_max 99
/*void warshall(int a[20][20],int n)
{
	int i,k,j;
	for(k=1;k<=n;k++){
	 for(i=1;i<=n;i++){
	  for(j=1;j<=n;j++){
	    a[i][j]=a[i][j]||a[i][k]&&a[k][j];
	    printf("%d\t",a[i][j]);}}}

}*/
void warshall(int a[int_max][int_max],int n)
{
	int i,k,j;
	for(k=1;k<=n;k++){
	 for(i=1;i<=n;i++){
	  for(j=1;j<=n;j++){
	    a[i][j]=a[i][j]||a[i][k]&&a[k][j];
}}}
}

void main()
{
	int a[int_max][int_max]={0},n,e,i,j,u,v;

	printf("Enter vertices : ");
	scanf("%d",&n);
	printf("Enter edges : ");
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	 {
		printf("Enter Edge %d : ",i);
		scanf("%d%d",&u,&v);
		a[u][v]=1;
	 }
	printf("Input  = \n");
	for(i=1;i<=n;i++)
	{
	 for(j=1;j<=n;j++)
	 printf("%d  ",a[i][j]	);
	 printf("\n");
	}
	warshall(a,n);
    printf("Transitive Closure Matrix = \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
        printf("%d\t",a[i][j]);}
        printf("\n");
    }
}

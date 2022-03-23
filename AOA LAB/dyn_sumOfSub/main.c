#include<stdio.h>
#include<conio.h>
#include<time.h>
#define max 10


int s[max], x[max];
int d;


void sumofsub(int,int,int);
int main()
 {
   int n,sum=0;
   int i;
   clock_t st,e;
   printf("Enter size of set : ");
   scanf("%d",&n);
   printf("Enter size in increasing order :  ");
   for(i=1;i<=n;i++)
    scanf("%d",&s[i]);
   printf("Enter the value of d : ");
   scanf("%d",&d);
   for(i=1;i<=n;i++)
   sum=sum+s[i];
   if(sum<d || s[i]>d)
     printf("No subsets....\n");
    else
     st=clock();
     sumofsub(0,1,sum);
     e=clock();
  printf("Time taken = %ld",(e-st)/CLOCKS_PER_SEC);

     }



void sumofsub(int m,int k,int r)
 {
  int i;
  x[k]=1;
  if(m+s[k]==d)
    {
      for(i=1;i<=k;i++)
        if(x[i]==1)
        printf("\t %d",s[i]);
       printf("\n");
    }
  else if((m+s[k]+s[k+1]<=d))
  sumofsub(m+s[k], k+1 ,r-s[k]);
  if((m+r-s[k]>=d) && (m+s[k+1]<=d))
   {
    x[k]=0;
    sumofsub(m,k+1,r-s[k]);
    }
}

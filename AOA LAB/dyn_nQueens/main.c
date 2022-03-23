#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const  int  max=20;
int   place(int x[],int k)
{
        int i;
        for(i=0;i<k;i++)
                   if (x[i]==x[k] || abs(x[i]-x[k])==abs(i-k))
                             return 0;
        return 1;

}
void display(int x[], int n)
{
           char chessb[max][max];
           int i,j;
           for(i=0;i<n;i++)
                  for(j=0;j<n;j++)
                                  chessb[i][j]='x';
           for(i=0;i<n;i++)
                  chessb[i][x[i]]='q';

           for(i=0;i<n;i++)
          {
            for(j=0;j<n;j++)
                      printf("%c | \t", chessb[i][j]);

               printf ("\n");
          }
          printf ("\n");

}

void nqueens(int n)
{
        int x[max];
        int k;
        x[0]=-1;
        k=0;
        while(k>=0)
       {
               x[k]=x[k]+1;
               while(x[k]<n && !place(x,k))
                           x[k]=x[k]+1;
               if(x[k]<n)
                         if (k==n-1)
                                display(x,n);
                           else
                         {
                                  k++;
                                  x[k]=-1;
                         }
              else
                       k--;
       }
}

void main()
{
        int n;
        clock_t e,s;
        printf("Enter the no. of queens :- ");
        scanf("%d", &n);
        printf("Solution For %d queens problem :-\n", n);
        s=clock();
        nqueens(n);
        e=clock();
        printf("Total time taken = %ld",(e-s)/CLOCKS_PER_SEC);

 }

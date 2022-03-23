#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
int match(char str[],char pattern[])
{
    int j=0;
    int n=strlen(str);
    int m=strlen(pattern);
    for (int i=0; i<=n-m; i++)
    {
        while( j<=m && pattern[j]==str[i+j])
        {
            j+=1;
            if (j==m)
              {return (i+1);}
        }

    }
    return -1;
}
void main()
{
    clock_t s,e,t;
    char str[20],pattern[10];

    printf("enter the string : ");
    //gets(str);
    scanf("%s",str);
    printf("enter string to be matched with : ");
    //gets(pattern);
    scanf("%s",pattern);

    s=clock();
    int res = match(str,pattern);
    e= clock();
    t=(e-s)/CLOCKS_PER_SEC;
    if(res==-1)
    {
        printf("unsuccessful\n");
    }
   else {
        printf("starts at %d\n",res);
   }
   printf("time taken = %ld",t);
}



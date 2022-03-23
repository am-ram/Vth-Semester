#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int factorial(int num)
{
  int i;
  int fact = 1;

  for (i = 1; i <= num; i++)
    fact *= i;
 return fact;
}
int main()
{
  int num;
  clock_t s,e,t;
   s=clock();
  if(num<0)
    printf("Invalid");

  printf("Enter a number : ");
  scanf("%d", &num);

  printf("%d!= %d", num, factorial(num));
  e=clock();
  t=(e-s)/CLOCKS_PER_SEC;
  printf("time taken: %ld \n",t);
}

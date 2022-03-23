#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*1) Implement a program to carry out the below tasks:
	a) Enter integer value n.
	b) If n is even, solve it for Tower of Hanoi problem.
	c) If n is odd, find out the factorial of n
*/
int fact(int n)
{
    if (n==0 ||n==1)
        return 1;
    else
        return (n*fact(n-1));
}
void toh(int num, char from_rod, char to_rod, char aux_rod)
{
    if (num == 1)
    {
        printf("\n\tMove disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    toh(num-1, from_rod, aux_rod, to_rod);
    printf("\n\tMove disk %d from rod %c to rod %c", num, from_rod, to_rod);
    toh(num-1, aux_rod, to_rod, from_rod);
}


void main()
{
    printf("ID NO. 20181CSE0621\tSai Ram.K\n\n");
    int num,res;
    clock_t e,s;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Solution for Tower Of Hanoi Problem With %d disks is \n",num);
        s=clock();
        toh(num,'a','c','b');
        e=clock();
        printf("\n\nTime Taken To Complete = %ld \n",(e-s)/CLOCKS_PER_SEC);
    }

    else if(num%2!=0)
    {
        s=clock();
        res = fact(num);
        e=clock();
        printf("Factorial of %d = %d\n",num,res);
        printf("\n\nTime Taken To Complete = %ld \n",(e-s)/CLOCKS_PER_SEC);
    }
    else
       printf("Invalid Number....Try again");

}

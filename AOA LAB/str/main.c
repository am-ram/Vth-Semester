#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void main()
{
    char str[20],add[20];
    printf("Enter string : ");
    gets(str);
    printf(str);
    printf("\nEnter string to add : ");
    gets(add);
    for (int i=0;i<strlen(str);i++)
    {
        if (str[i] == ' ')
            strcat(str,add);
    }
    puts(str);
}

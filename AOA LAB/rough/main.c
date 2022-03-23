#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",n);
    for(int i=0;i<1;i++){
        printf("arr of i = %d\n",arr[i]);
        printf("arr of arr of i = %d",arr[arr[i]]);
    }
}


#include <stdio.h>
#include <time.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selsort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;
        swap(&arr[min], &arr[i]);
    }
}
int binsearch(int arr[] , int left , int right , int x)
{
  int mid = 0 ;
   while (left <= right) {
    if (right >= left) {
        mid = left + (right - left) / 2;
      }
      if (arr[mid] == x){
            return mid;
      }
      if (arr[mid] < x){
            left = mid + 1;
      }
       else
            right = mid - 1;
   }
   return -1;
}

void main()
{
  int size;
  printf("Enter Size : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter %d Elements\n",size);
  for(int i = 0 ; i < size ; i++)
    scanf("%d",&arr[i]);

  clock_t s,e,t,e1,s1;
  s= clock();
  selsort(arr,size);
  e= clock();
  t =  (e-s)/CLOCKS_PER_SEC;
  printf("Time for selection sort = %ld\n",t);
   for(int i = 0 ; i < size ; i++)
        printf("%d \t",arr[i]);

  int x;
  printf("\nEnter search element by bs :");
  scanf("%d",&x);
  s1=clock();
  int res = binsearch(arr,0,size-1,x);
  e1=clock();
  if (res == -1)
  {
    printf("Elements Not Found");
  }
  else {
    printf("ELement at index = %d",res);
  }
  printf("time for binary search = %ld",(s1-e1)/CLOCKS_PER_SEC);
}

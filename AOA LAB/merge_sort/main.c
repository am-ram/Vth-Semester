#include <stdio.h>
#include <time.h>

void merge(int arr[], int start, int mid, int end) {

  int len1 = mid - start + 1;
  int len2 = end - mid;

  int leftarr[len1], rightarr[len2];

  for (int i = 0; i < len1; i++)
    leftarr[i] = arr[start + i];
  for (int j = 0; j < len2; j++)
    rightarr[j] = arr[mid + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = start;

  while (i < len1 && j < len2) {
    if (leftarr[i] <= rightarr[j]) {
      arr[k] = leftarr[i];
      i++;
    } else {
      arr[k] = rightarr[j];
      j++;
    }
    k++;
  }

  while (i < len1) {
    arr[k] = leftarr[i];
    i++;
    k++;
  }

  while (j < len2) {
    arr[k] = rightarr[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int start, int end) {
  if (start < end) {

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}

void main()
{
  clock_t s,e;
  int arr[20],size;
  printf("Enter size:");
  scanf("%d",&size);
  printf("Enter %d elements: ",size);
  for(int i=0;i<size;i++)
  {
      scanf("%d",&arr[i]);
  }
    s=clock();
  mergeSort(arr, 0, size - 1);
    e=clock();
  printf("Sorted array\n");
  for(int i=0;i<size;i++)
  {
      printf("%d\t",arr[i]);
  }
    printf("\n\nTime == %ld",(e-s)/CLOCKS_PER_SEC);
}

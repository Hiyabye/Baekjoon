#include <stdio.h>

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void quickSort(int arr[], int left, int right) {
  int i = left, j = right;
  int pivot = arr[(left+right)/2];

  while (i <= j) {
    while (arr[i] < pivot) i++;
    while (arr[j] > pivot) j--;
    if (i <= j) {
      swap(&arr[i], &arr[j]);
      i++;
      j--;
    }
  }
  if (left < j)   quickSort(arr, left, j);
  if (right > i)  quickSort(arr, i, right);
}

int main(void) {
  int n, k, x[1000];

  scanf("%d %d", &n, &k);
  for (int i=0; i<n; i++) {
    scanf("%d", &x[i]);
  }
  quickSort(x, 0, n-1);
  printf("%d", x[n-k]);
  return 0;
}
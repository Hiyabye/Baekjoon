#include <stdio.h>

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int arr[], int l, int r) {
  int pivot = arr[r];
  int i = l-1;

  for (int j=l; j<=r-1; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i+1], &arr[r]);
  return i+1;
}

void quickSort(int arr[], int l, int r) {
  if (l < r) {
    int pivot = partition(arr, l, r);
    quickSort(arr, l, pivot-1);
    quickSort(arr, pivot+1, r);
  }
}

int main(void) {
  int n, a[100000];
  
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  quickSort(a, 0, n-1);

  for (int i=0; i<n; i++) {
    if (i == 0 || a[i] != a[i-1]) {
      printf("%d ", a[i]);
    }
  }
  return 0;
}
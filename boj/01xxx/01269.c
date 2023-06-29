#include <stdio.h>

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int arr[], int l, int r) {
  int pivot = arr[r];
  int i = l-1;

  for (int j = l; j <= r-1; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i+1], &arr[r]);
  return i + 1;
}

void quickSort(int arr[], int l, int r) {
  if (l < r) {
    int pivot = partition(arr, l, r);
    quickSort(arr, l, pivot-1);
    quickSort(arr, pivot+1, r);
  }
}

int binarySearch(int arr[], int l, int r, int n) {
  while (l <= r) {
    int m = l+(r-l)/2;
    if (arr[m] == n) return 1;
    if (arr[m] < n) l = m+1;
    else r = m - 1;
  }
  return 0;
}

int main(void) {
  int a, b, count = 0;
  int arr[200000], n;

  scanf("%d %d", &a, &b);
  
  for (int i=0; i<a; i++) {
    scanf("%d", &arr[i]);
  }
  quickSort(arr, 0, a-1);

  for (int i=0; i<b; i++) {
    scanf("%d", &n);
    if (binarySearch(arr, 0, a-1, n) != 0) {
      count++;
    }
  }

  printf("%d", a+b-count*2);
  return 0;
}
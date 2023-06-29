#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int arr[], int l, int r) {
  int pivot = arr[r];
  int i = l-1;

  for (int j=l; j<r; j++) {
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
    int pi = partition(arr, l, r);
    quickSort(arr, l, pi-1);
    quickSort(arr, pi+1, r);
  }
}

int main(void) {
  int n, p[1000], sum = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &p[i]);
  }
  quickSort(p, 0, n-1);
  for (int i=0; i<n; i++) {
    sum += p[i]*(n-i);
  }
  printf("%d", sum);
  return 0;
}
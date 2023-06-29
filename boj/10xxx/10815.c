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

int binary_search(int arr[], int l, int r, int target, int size) {
  if (l < 0 || r >= size || l > r) return 0;
  
  int mid = l+(r-l)/2;
  if (target > arr[mid]) return binary_search(arr, mid+1, r, target, size);
  else if (target < arr[mid]) return binary_search(arr, l, mid-1, target, size);
  else return 1;
}

int main(void) {
  int n, m, find;
  int arr[500000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  quickSort(arr, 0, n-1);

  scanf("%d", &m);
  for (int i=0; i<m; i++) {
    scanf("%d", &find);
    printf("%d ", binary_search(arr, 0, n-1, find, n));
  }
  return 0;
}
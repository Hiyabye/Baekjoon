#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
  int i, j, k;
  int n1 = m-l+1;
  int n2 = r-m;
  int L[n1], R[n2];

  for (i=0; i<n1; i++) L[i] = arr[l+i];
  for (j=0; j<n2; j++) R[j] = arr[m+1+j];

  i = 0, j = 0, k = l;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) arr[k++] = L[i++];
    else              arr[k++] = R[j++];
  }

  while (i < n1) arr[k++] = L[i++];
  while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l+(r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
  }
}

int binarySearch(int arr[], int l, int r, int target, int size) {
  if (l < 0 || r >= size || l > r) return -1;
  
  int mid = l+(r-l)/2;
  if (target > arr[mid]) return binarySearch(arr, mid+1, r, target, size);
  else if (target < arr[mid]) return binarySearch(arr, l, mid-1, target, size);
  else return mid;
}

int main(void) {
  int n, m, find;
  int a[100000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  mergeSort(a, 0, n-1);

  scanf("%d", &m);
  for (int i=0; i<m; i++) {
    scanf("%d", &find);
    printf("%d\n", binarySearch(a, 0, n-1, find, n) == -1 ? 0 : 1);
  }

  return 0;
}
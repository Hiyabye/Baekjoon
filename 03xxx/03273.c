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

int main(void) {
  int n, x;
  int a[100000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  scanf("%d", &x);

  mergeSort(a, 0, n-1);

  int cnt = 0;
  for (int i=0, j=n-1; i<j;) {
    int sum = a[i] + a[j];
    if (sum == x) {
      cnt++;
      i++;
      j--;
    } else if (sum < x) {
      i++;
    } else {
      j--;
    }
  }

  printf("%d", cnt);
  return 0;
}
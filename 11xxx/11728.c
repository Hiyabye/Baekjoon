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
  int n, m;
  int a[1000000], b[1000000];

  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i=0; i<m; i++) {
    scanf("%d", &b[i]);
  }

  mergeSort(a, 0, n-1);
  mergeSort(b, 0, m-1);

  for (int i=0, j=0; i<n || j<m;) {
    if (i == n) printf("%d ", b[j++]);
    else if (j == m) printf("%d ", a[i++]);
    else if (a[i] <= b[j]) printf("%d ", a[i++]);
    else printf("%d ", b[j++]);
  }
  return 0;
}
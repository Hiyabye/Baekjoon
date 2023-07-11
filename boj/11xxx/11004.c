#include <stdio.h>

int n, k;
int a[5000000];

void merge(int l, int m, int r) {
  int i, j, k;
  int n1 = m-l+1;
  int n2 = r-m;
  int L[n1], R[n2];

  for (i=0; i<n1; i++) L[i] = a[l+i];
  for (j=0; j<n2; j++) R[j] = a[m+1+j];

  i = 0, j = 0, k = l;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) a[k++] = L[i++];
    else              a[k++] = R[j++];
  }

  while (i < n1) a[k++] = L[i++];
  while (j < n2) a[k++] = R[j++];
}

void mergeSort(int l, int r) {
  if (l < r) {
    int m = l+(r-l)/2;
    mergeSort(l, m);
    mergeSort(m+1, r);
    merge(l, m, r);
  }
}

int main(void) {
  scanf("%d %d", &n, &k);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  mergeSort(0, n-1);
  printf("%d", a[k-1]);
  return 0;
}
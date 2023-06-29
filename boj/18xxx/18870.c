#include <stdio.h>

typedef struct X {
  int value;
  int id;
} X;

// mode: 1 = value, 2 = id
void merge(X a[], int l, int m, int r, int mode) {
  int i, j, k;
  int n1 = m-l+1;
  int n2 = r-m;
  X L[n1], R[n2];

  for (i=0; i<n1; i++) L[i] = a[l+i];
  for (j=0; j<n2; j++) R[j] = a[m+1+j];

  i = 0, j = 0, k = l;
  while (i < n1 && j < n2) {
    if (mode == 1) {
      if (L[i].value < R[j].value) a[k++] = L[i++];
      else                         a[k++] = R[j++];
    } else {
      if (L[i].id < R[j].id) a[k++] = L[i++];
      else                   a[k++] = R[j++];
    }
  }

  while (i < n1) a[k++] = L[i++];
  while (j < n2) a[k++] = R[j++];
}

// mode: 1 = value, 2 = id
void mergeSort(X a[], int l, int r, int mode) {
  if (l < r) {
    int m = l+(r-l)/2;
    mergeSort(a, l, m, mode);
    mergeSort(a, m+1, r, mode);
    merge(a, l, m, r, mode);
  }
}

int main(void) {
  int n;
  X x[1000000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &x[i].value);
    x[i].id = i;
  }

  mergeSort(x, 0, n-1, 1);

  for (int i=0, idx=0, key=x[0].value; i<n; i++) {
    if (x[i].value == key) {
      x[i].value = idx;
    } else {
      key = x[i].value;
      idx++;
      x[i].value = idx;
    }
  }

  mergeSort(x, 0, n-1, 2);

  for (int i=0; i<n; i++) {
    printf("%d ", x[i].value);
  }

  return 0;
}
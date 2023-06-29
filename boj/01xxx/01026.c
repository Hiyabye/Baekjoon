#include <stdio.h>

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// mode 0: ascending, mode 1: descending
int partition(int arr[], int l, int r, int mode) {
  int pivot = arr[r];
  int i = l-1;

  for (int j=l; j<=r-1; j++) {
    if (mode == 0) {
      if (arr[j] < pivot) {
        i++;
        swap(&arr[i], &arr[j]);
      }
    } else {
      if (arr[j] > pivot) {
        i++;
        swap(&arr[i], &arr[j]);
      }
    }
  }
  swap(&arr[i+1], &arr[r]);
  return i+1;
}

void quickSort(int arr[], int l, int r, int mode) {
  if (l < r) {
    int pivot = partition(arr, l, r, mode);
    quickSort(arr, l, pivot-1, mode);
    quickSort(arr, pivot+1, r, mode);
  }
}

int main(void) {
  int n, a[50], b[50];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i=0; i<n; i++) {
    scanf("%d", &b[i]);
  }

  quickSort(a, 0, n-1, 0);
  quickSort(b, 0, n-1, 1);

  int sum = 0;
  for (int i=0; i<n; i++) {
    sum += a[i] * b[i];
  }
  printf("%d\n", sum);
  return 0;
}
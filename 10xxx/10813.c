#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  int n, m, i, j, arr[100];

  scanf("%d %d", &n, &m);
  for (int a=0; a<n; a++) {
    arr[a] = a+1;
  }
  for (int a=0; a<m; a++) {
    scanf("%d %d", &i, &j);
    swap(&arr[i-1], &arr[j-1]);
  }
  for (int a=0; a<n; a++) {
    printf("%d ", arr[a]);
  }
  return 0;
}
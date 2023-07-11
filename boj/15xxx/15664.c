#include <stdio.h>

int n, m;
int a[8], b[8], c[8];

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubbleSort(void) {
  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {
      if (a[j] > a[j+1]) {
        swap(&a[j], &a[j+1]);
      }
    }
  }
}

void solve(int idx) {
  if (idx == m) {
    for (int i=0; i<m; i++) {
      printf("%d ", b[i]);
    }
    printf("\n");
    return;
  }

  int pre = 0;
  for (int i=0; i<n; i++) {
    if (c[i] || a[i] == pre || a[i] < b[idx-1]) continue;
    c[i] = 1;
    pre = b[idx] = a[i];
    solve(idx+1);
    c[i] = 0;
  }
}

int main(void) {
  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
    c[i] = 0;
  }
  bubbleSort();

  solve(0);
  return 0;
}
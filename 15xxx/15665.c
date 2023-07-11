#include <stdio.h>

int n, m;
int a[7], b[7];

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
    if (a[i] == pre) continue;
    pre = b[idx] = a[i];
    solve(idx+1);
  }
}

int main(void) {
  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  bubbleSort();

  solve(0);
  return 0;
}
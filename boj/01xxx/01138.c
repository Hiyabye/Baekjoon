#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  int n, h[10], ans[10];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &h[i]);
    ans[i] = i+1;
  }

  for (int i=n-1; i>=0; i--) {
    for (int j=0; j<h[i]; j++) {
      swap(&ans[i+j], &ans[i+j+1]);
    }
  }

  for (int i=0; i<n; i++) {
    printf("%d ", ans[i]);
  }
  return 0;
}
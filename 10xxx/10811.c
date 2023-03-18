#include <stdio.h>

void reverse(int a[], int start, int end) {
  int tmp[100];
  for (int x=start; x<=end; x++)  tmp[x] = a[x];
  for (int x=start; x<=end; x++)  a[start+end-x] = tmp[x];
}

int main(void) {
  int n, m, i, j, a[100];

  scanf("%d %d", &n, &m);
  for (int x=0; x<n; x++) {
    a[x] = x+1;
  }
  for (int x=0; x<m; x++) {
    scanf("%d %d", &i, &j);
    reverse(a, i-1, j-1);
  }
  for (int x=0; x<n; x++) {
    printf("%d ", a[x]);
  }
  return 0;
}
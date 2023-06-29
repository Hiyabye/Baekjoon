#include <stdio.h>

int arr[8], brr[8];

void print(int m) {
  for (int i=0; i<m; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void solve(int index, int n, int m) {
  if (index == m) {
    print(m);
    return;
  }

  for (int i=1; i<=n; i++) {
    if (brr[i-1] == 0) {
      arr[index] = i;
      brr[i-1] = 1;
      solve(index+1, n, m);
      brr[i-1] = 0;
    }
  }
}

int main(void) {
  int n, m;

  for (int i=0; i<8; i++) {
    brr[i] = 0;
  }

  scanf("%d %d", &n, &m);
  solve(0, n, m);
  return 0;
}
#include <stdio.h>

int n, m;
int arr[8];

void solve(int idx) {
  if (idx == m) {
    for (int i=0; i<m; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
    return;
  }

  if (idx == 0) {
    for (int i=0; i<n; i++) {
      arr[idx] = i+1;
      solve(idx+1);
      arr[idx] = 0;
    }
  } else {
    for (int i=0; i<n; i++) {
      if (arr[idx-1] >= i+1) continue;
      arr[idx] = i+1;
      solve(idx+1);
      arr[idx] = 0;
    }
  }
}

int main(void) {
  for (int i=0; i<8; i++) {
    arr[i] = 0;
  }

  scanf("%d %d", &n, &m);
  solve(0);
  return 0;
}
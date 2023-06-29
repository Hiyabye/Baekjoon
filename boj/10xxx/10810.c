#include <stdio.h>

void solve(int arr[], int i, int j, int k) {
  for (int a=i-1; a<=j-1; a++) {
    arr[a] = k;
  }
}

int main(void) {
  int n, m, i, j , k;
  int arr[100] = { 0 };

  scanf("%d %d", &n, &m);
  for (int a=0; a<m; a++) {
    scanf("%d %d %d", &i, &j, &k);
    solve(arr, i, j, k);
  }
  for (int a=0; a<n; a++) {
    printf("%d ", arr[a]);
  }
  return 0;
}
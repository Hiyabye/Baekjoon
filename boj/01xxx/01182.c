#include <stdio.h>

int n, s;
int a[20];

int solve(int idx, int sum) {
  if (idx == n) return sum == s;
  return solve(idx+1, sum) + solve(idx+1, sum+a[idx]);
}

int main(void) {
  scanf("%d %d", &n, &s);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  printf("%d", solve(0, 0) - (s == 0));
  return 0;
}
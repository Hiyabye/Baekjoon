#include <stdio.h>
#include <math.h>

int prime(int n) {
  if (n == 1) return 0;
  if (n == 2) return 1;
  for (int i=2; i<=(int)sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

void solve(void) {
  int n;

  scanf("%d", &n);
  while (n > 1) {
    for (int i=2; i<=n; i++) {
      if (prime(i) && n % i == 0) {
        int cnt = 0;
        while (n % i == 0) {
          n /= i;
          cnt++;
        }
        printf("%d %d\n", i, cnt);
        break;
      }
    }
  }
}

int main(void) {
  int t;

  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return 0;
}
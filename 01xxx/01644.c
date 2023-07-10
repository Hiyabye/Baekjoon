#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n, cnt = 0;
  bool prime[4000001];
  long long a[300000];

  for (int i=2; i<=4000000; i++) {
    prime[i] = (i % 2 == 0) ? false : true;
  }
  for (int i=3; i<=2000; i+=2) {
    if (prime[i]) {
      for (int j=i*i; j<=4000000; j+=2*i) {
        prime[j] = false;
      }
    }
  }

  a[cnt++] = 0;
  a[cnt++] = 2;
  for (int i=3; i<=4000000; i++) {
    if (prime[i]) a[cnt++] = i;
  }

  for (int i=1; i<cnt; i++) {
    a[i] += a[i-1];
  }

  scanf("%d", &n);
  int ans = 0, l = 0, r = 1;
  for (int l=0, r=1; l<=r && r<cnt;) {
    if (a[r] - a[l] > n) l++;
    else if (a[r] - a[l] < n) r++;
    else if (a[r] - a[l] == n) ans++, l++, r++;
  }

  printf("%d", ans);
  return 0;
}
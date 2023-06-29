#include <stdio.h>

#define MOD 10007

long long factor(int num) {
  for (long long i=2; i<=num; i++) {
    if (num % i == 0) return i;
  }
  return 1;
};

long long nCk(int n, int k) {
  int a[1000] = {0};
  long long res = 1;

  if (k > n/2) k = n-k;
  for (int i=0; i<k; ++i) {
    int n1 = n-i, n2 = i+1;
    while (n1 > 1) {
      int f = factor(n1);
      a[f]++;
      n1 /= f;
    }
    while (n2 > 1) {
      int f = factor(n2);
      a[f]--;
      n2 /= f;
    }
  }
  for (int i=0; i<1000; ++i) {
    if (a[i] > 0) {
      for (int j=0; j<a[i]; ++j) {
        res *= i;
        res %= MOD;
      }
    }
  }
  return res;
}

int main(void) {
  int n, k, res = 1;

  scanf("%d %d", &n, &k);
  printf("%lld", nCk(n, k) % MOD);
  return 0;
}
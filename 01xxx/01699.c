#include <stdio.h>
#include <math.h>

int a[100001];

int solve(int n) {
  if (n == 0) return 0;

  int min = 100000;
  for (int i=1; i<=(int)sqrt(n); i++) {
    a[n-i*i] = a[n-i*i] == 0 ? solve(n-i*i) : a[n-i*i];
    min = min < a[n-i*i] ? min : a[n-i*i];
  }
  return min+1;
}

int main(void) {
  int n;

  for (int i=0; i<=100000; i++) {
    a[i] = 0;
  }

  scanf("%d", &n);
  printf("%d", solve(n));
  return 0;
}
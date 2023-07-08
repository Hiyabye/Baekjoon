#include <stdio.h>

int dist(int a, int b) {
  return a > b ? a-b : b-a;
}

int main(void) {
  int n, x[10000];
  long long sum = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &x[i]);
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      sum += dist(x[i], x[j]);
    }
  }

  printf("%lld", sum);
  return 0;
}
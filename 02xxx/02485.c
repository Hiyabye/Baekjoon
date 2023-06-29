#include <stdio.h>

int main(void) {
  int n, pre, cur;
  int diff[100000];

  scanf("%d", &n);
  scanf("%d", &pre);
  for (int i=1; i<n; i++) {
    scanf("%d", &cur);
    diff[i-1] = cur-pre;
    pre = cur;
  }

  int gcd = diff[0];
  for (int i=1; i<n-1; i++) {
    int a = gcd, b = diff[i];
    while (b != 0) {
      int r = a%b;
      a = b;
      b = r;
    }
    gcd = a;
  }

  int count = 0;
  for (int i=0; i<n-1; i++) {
    count += (diff[i]/gcd-1);
  }

  printf("%d", count);
  return 0;
}
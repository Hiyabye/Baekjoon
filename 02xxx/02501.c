#include <stdio.h>

int main(void) {
  int n, k, res = 0;

  scanf("%d %d", &n, &k);
  while (k > 0) {
    res++;
    if (res>n && k>0) {
      res = 0;
      break;
    }
    if (n%res == 0) {
      k--;
    }
  }
  printf("%d", res);
  return 0;
}
#include <stdio.h>

int main(void) {
  int n, l;

  scanf("%d %d", &n, &l);
  for (int i=l; i<=100; i++) {
    if (2*n-i*i+i < 0 || (2*n-i*i+i) % (2*i) != 0) continue;
    int a = (2*n-i*i+i) / (2*i);
    for (int j=a; j<a+i; j++) {
      printf("%d ", j);
    }
    return 0;
  }

  printf("-1\n");
  return 0;
}
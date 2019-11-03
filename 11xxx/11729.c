#include <stdio.h>

int count(int n) {
  int d = 1;

  for(int i=2; i<=n; ++i) d = 2*d+1;
  return d;
}

void hanoi(int n, int a, int b, int c) {
  if(n == 1) {
    printf("%d %d\n", a, c);
    return;
  }
     
  hanoi(n-1, a, c, b);
  printf("%d %d\n", a, c);
  hanoi(n-1, b, a, c);
}

int main(void) {
	int n;

  scanf("%d", &n);
  printf("%d\n", count(n));
  hanoi(n, 1, 2, 3);
  return 0;
}
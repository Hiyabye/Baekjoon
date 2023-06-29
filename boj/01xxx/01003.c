#include <stdio.h>

int key[41] = { 0 };

int fibonacci(int n) {
  if (n == 0) {
    key[0] = 0;
    return 0;
  } else if (n == 1) {
    key[1] = 1;
    return 1;
  } else {
    if (key[n] != 0) return key[n];
    else return key[n] = fibonacci(n-1) + fibonacci(n-2);
  }
}

int main(void) {
  int i, t, n;
  
  scanf("%d", &t);
  for (i=0; i<t; i++) {
    scanf("%d", &n);
    if (n == 0) printf("1 0\n");
    else if (n == 1) printf("0 1\n");
    else printf("%d %d\n", fibonacci(n-1), fibonacci(n));
  }
  return 0;
}
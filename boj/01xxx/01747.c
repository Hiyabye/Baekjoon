#include <stdio.h>
#include <math.h>

int prime(int n) {
  if (n == 1) return 0;
  if (n == 2) return 1;
  for (int i=2; i<=sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int palindrome(int n) {
  int len = 0;
  char s[10];

  while (n > 0) {
    s[len++] = n % 10;
    n /= 10;
  }
  s[len] = '\0';

  for (int i=0; i<len; i++) {
    if (s[i] != s[len-i-1]) return 0;
  }
  return 1;
}

int main(void) {
  int n;

  scanf("%d", &n);
  while (!(prime(n) && palindrome(n))) n++;
  printf("%d", n);
  return 0;
}
#include <stdio.h>

int main(void) {
  int n, a, b, count = 0;
  int cow[10];

  for (int i=0; i<10; i++) {
    cow[i] = -1;
  }

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d %d", &a, &b);
    if (cow[a-1] == -1) cow[a-1] = b;
    else if (cow[a-1] != b) {
      cow[a-1] = b;
      count++;
    }
  }

  printf("%d", count);
  return 0;
}
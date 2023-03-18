#include <stdio.h>

int main(void) {
  int n;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n-i-1; j++) printf(" ");
    printf("*");
    for (int j=0; j<i*2-1; j++) printf(" ");
    if (i != 0) printf("*");
    printf("\n");
  }
  return 0;
}
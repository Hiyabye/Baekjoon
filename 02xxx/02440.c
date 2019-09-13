#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);
  while (n > 0) {
    for (int i=0; i<n; i++) printf("*");
    printf("\n");
    n--;
  }
  return 0;
}
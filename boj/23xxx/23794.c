#include <stdio.h>

int main(void) {
  int n;

  scanf("%d", &n);

  for (int i=0; i<n+2; i++) printf("@");
  printf("\n");
  for (int i=0; i<n; i++) {
    printf("@");
    for (int j=0; j<n; j++) printf(" ");
    printf("@\n");
  }
  for (int i=0; i<n+2; i++) printf("@");
  return 0;
}
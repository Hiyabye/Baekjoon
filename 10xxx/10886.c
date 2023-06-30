#include <stdio.h>

int main(void) {
  int n, num, count = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &num);
    if (num == 1) count++;
  }
  if (count > n/2) printf("Junhee is cute!\n");
  else printf("Junhee is not cute!\n");
  return 0;
}
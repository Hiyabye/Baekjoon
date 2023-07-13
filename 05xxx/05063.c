#include <stdio.h>

int main(void) {
  int n, r, e, c;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d %d %d", &r, &e, &c);
    if (e-c > r) printf("advertise\n");
    else if (e-c < r) printf("do not advertise\n");
    else printf("does not matter\n");
  }
  return 0;
}
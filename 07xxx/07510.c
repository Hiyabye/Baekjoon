#include <stdio.h>

int main(void) {
  int n, a, b, c;

  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    scanf("%d %d %d", &a, &b, &c);
    printf("Scenario #%d:\n", i);
    if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b) printf("yes\n");
    else printf("no\n");
    if (i != n) printf("\n");
  }
  return 0;
}
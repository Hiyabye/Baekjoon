#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b, c, idx = 1;

  scanf("%d %d %d", &a, &b, &c);
  while (!(a==0 && b==0 && c==0)) {
    if (idx != 1) printf("\n");
    printf("Triangle #%d\n", idx++);

    if (a == -1) {
      if (c > b) printf("a = %.3f\n", sqrt((float)c*c - b*b));
      else printf("Impossible.\n");
    } else if (b == -1) {
      if (c > a) printf("b = %.3f\n", sqrt((float)c*c - a*a));
      else printf("Impossible.\n");
    } else if (c == -1) {
      printf("c = %.3f\n", sqrt((float)a*a + b*b));
    }
    
    scanf("%d %d %d", &a, &b, &c);
  }
  return 0;
}
#include <stdio.h>

int main(void) {
  int s = 0, t = 0, n;

  for (int i=0; i<4; i++) {
    scanf("%d", &n);
    s += n;
  }
  for (int i=0; i<4; i++) {
    scanf("%d", &n);
    t += n;
  }
  
  if (s >= t) printf("%d", s);
  else printf("%d", t);
  return 0;
}
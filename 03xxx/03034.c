#include <stdio.h>

int main(void) {
  int n, w, h, a;

  scanf("%d %d %d", &n, &w, &h);
  for (int i=0; i<n; i++) {
    scanf("%d", &a);
    printf("%s\n", a*a<=w*w+h*h ? "DA" : "NE");
  }
  return 0;
}
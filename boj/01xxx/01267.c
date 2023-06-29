#include <stdio.h>

int main(void) {
  int n, len, y = 0, m = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &len);
    y += (len/30+1)*10;
    m += (len/60+1)*15;
  }

  if (y > m) printf("M %d", m);
  else if (y < m) printf("Y %d", y);
  else printf("Y M %d", y);
  return 0;
}
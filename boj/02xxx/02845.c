#include <stdio.h>

int main(void) {
  int l, p, news[5];

  scanf("%d %d", &l, &p);
  for (int i=0; i<5; i++)
    scanf("%d", &news[i]);

  for (int i=0; i<5; i++)
    printf("%d ", news[i]-l*p);
  return 0;
}
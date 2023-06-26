#include <stdio.h>

int main(void) {
  int t;

  scanf("%d", &t);
  if (t%10 != 0) printf("-1");
  else           printf("%d %d %d", t/300, (t%300)/60, (t%60)/10);
  return 0;
}
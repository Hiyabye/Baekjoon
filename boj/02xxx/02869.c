#include <stdio.h>

int main(void) {
  int a, b, v, day = 0, location = 0;

  scanf("%d %d %d", &a, &b, &v);
  day += (v-a)/(a-b);
  location += day*(a-b);
  
  while (location < v) {
    location += a;
    day++;
    if (location >= v) break;
    location -= b;
  }
  printf("%d", day);
  return 0;
}
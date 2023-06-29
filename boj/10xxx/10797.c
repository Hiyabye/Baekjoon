#include <stdio.h>

int main(void) {
  int day, car, count = 0;

  scanf("%d", &day);
  for (int i=0; i<5; i++) {
    scanf("%d", &car);
    if (car % 10 == day % 10) count++;
  }
  printf("%d", count);
  return 0;
}
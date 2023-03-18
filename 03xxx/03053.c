#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main(void) {
  int r;
  
  scanf("%d", &r);
  printf("%.6f\n%.6f", (double)(r*r)*PI, (double)(r*r)*2);
  return 0;
}
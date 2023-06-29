#include <stdio.h>

int main(void) {
  int score, p[5] = {0};

  for (int i=0; i<5; i++) {
    for (int j=0; j<4; j++) {
      scanf("%d", &score);
      p[i] += score;
    }
  }

  int max = 0, max_i = 0;
  for (int i=0; i<5; i++) {
    if (p[i] > max) {
      max = p[i];
      max_i = i;
    }
  }

  printf("%d %d", max_i+1, max);
  return 0;
}
#include <stdio.h>

int main(void) {
  int n, sum = 0;
  int score[100];

  scanf("%d", &n);
  scanf("%d", &score[0]);
  for (int i=1; i<n; i++) {
    scanf("%d", &score[i]);
    if (score[i-1] && score[i]) score[i] += score[i-1];
  }

  for (int i=0; i<n; i++) {
    sum += score[i];
  }
  printf("%d", sum);
  return 0;
}
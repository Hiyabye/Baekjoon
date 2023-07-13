#include <stdio.h>

int main(void) {
  int a[9], sum = 0;

  for (int i=0; i<9; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }

  for (int i=0; i<9; i++) {
    for (int j=0; j<9; j++) {
      if (i == j) continue;
      if (a[i]+a[j] == sum-100) {
        for (int k=0; k<9; k++) {
          if (k == i || k == j) continue;
          printf("%d\n", a[k]);
        }
        return 0;
      }
    }
  }
  return 0;
}
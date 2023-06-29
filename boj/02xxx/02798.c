#include <stdio.h>

int main(void) {
  int n, m, sum, max = 0, num[101];

  scanf("%d %d", &n, &m);
  for (int a=0; a<n; a++)
    scanf("%d", &num[a]);

  for (int a=0; a<n-2; a++) {
    for (int b=a+1; b<n-1; b++) {
      for (int c=b+1; c<n; c++) {
        sum = num[a] + num[b] + num[c];
        if (sum > m) continue;
        if (sum > max) max = sum;
      }
    }
  }

  printf("%d", max);
  return 0;
}
#include <stdio.h>

int main(void) {
  int n, max = 0;
  int cnt[10];

  for (int i=0; i<10; i++) {
    cnt[i] = 0;
  }

  scanf("%d", &n);
  while (n > 0) {
    cnt[n % 10]++;
    n /= 10;
  }
  
  for (int i=0; i<10; i++) {
    if (i == 6 || i == 9) continue;
    max = cnt[i] > max ? cnt[i] : max;
  }
  max = (cnt[6]+cnt[9]+1)/2 > max ? (cnt[6]+cnt[9]+1)/2 : max;

  printf("%d", max);
  return 0;
}
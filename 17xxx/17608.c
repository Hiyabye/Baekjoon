#include <stdio.h>

int main(void) {
  int n, h[100000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &h[i]);
  }
  
  int max = h[n-1], count = 1;
  for (int i=n-2; i>=0; i--) {
    if (h[i] > max) {
      max = h[i];
      count++;
    }
  }
  printf("%d", count);
  return 0;
}
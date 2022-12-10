#include <stdio.h>

int main(void) {
  int n, v, num[201] = { 0 };

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &v);
    num[v+100]++;
  }
  scanf("%d", &v);
  printf("%d", num[v+100]);
  return 0;
}
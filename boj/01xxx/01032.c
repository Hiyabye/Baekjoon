#include <stdio.h>
#include <string.h>

int main(void) {
  int n;
  char f[51], same[51];

  scanf("%d", &n);
  scanf("%s", same);
  for (int i=1; i<n; i++) {
    scanf("%s", f);
    for (int i=0; i<strlen(f); i++) {
      same[i] = same[i] == f[i] ? same[i] : '?';
    }
  }

  printf("%s", same);
  return 0;
}
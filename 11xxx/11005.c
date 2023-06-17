#include <stdio.h>

int main(void) {
  int n, b, idx=0;
  char res[30];

  scanf("%d %d", &n, &b);
  while (n > 0) {
    int r = n%b;
    res[idx++] = r<10 ? r+'0' : r-10 + 'A';
    n /= b;
  }

  for (int i=idx-1; i>=0; i--) {
    printf("%c", res[i]);
  }
  return 0;
}
#include <stdio.h>
#include <string.h>

int calculate(char str[]) {
  int i, value;
  int alpha[27] = { 0 };

  int previous = str[0]-'a';
  for (i=0; i<strlen(str); i++) {
    value = str[i]-'a';
    if (alpha[value] == 1 && previous != value) return 0;
    else                                    alpha[value] = 1;
    previous = value;
  }
  return 1;
}

int main(void) {
  int i, n, count = 0;
  char str[101];

  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%s", str);
    count += calculate(str);
  }
  printf("%d", count);
  return 0;
}
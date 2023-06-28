#include <stdio.h>
#include <string.h>

int main(void) {
  int n;
  char pw[20];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%s", pw);
    if (strlen(pw)>=6 && strlen(pw)<=9) printf("yes\n");
    else                                printf("no\n");
  }
  return 0;
}
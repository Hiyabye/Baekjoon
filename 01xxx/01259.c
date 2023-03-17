#include <stdio.h>
#include <string.h>

int main(void) {
  char num[5];

  scanf("%s", num);
  while (num[0] != '0') {
    int ok = 1, len = strlen(num);
    for (int i=0; i<len/2; i++) {
      if (num[i] != num[len-i-1])
        ok = 0;
    }
    if (ok == 1)  printf("yes\n");
    else          printf("no\n");
    scanf("%s", num);
  }
  return 0;
}
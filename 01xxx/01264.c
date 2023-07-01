#include <stdio.h>
#include <string.h>

int main(void) {
  char line[256];

  scanf(" %[^\n]", line);
  while (!(strlen(line) == 1 && line[0] == '#')) {
    int count = 0;
    for (int i=0; i<strlen(line); i++) {
      if (line[i] == 'a' || line[i] == 'A') count++;
      if (line[i] == 'e' || line[i] == 'E') count++;
      if (line[i] == 'i' || line[i] == 'I') count++;
      if (line[i] == 'o' || line[i] == 'O') count++;
      if (line[i] == 'u' || line[i] == 'U') count++;
    }
    printf("%d\n", count);
    scanf(" %[^\n]", line);
  }
  return 0;
}
#include <stdio.h>
#include <string.h>

int main(void) {
  int a;
  char OX[80];

  scanf("%d", &a);
  for (int i=0; i<a; i++) {
    int sum = 0;
    int score = 1;
    scanf("%s", OX);
    for (int j=0; j<strlen(OX); j++) {
      if (OX[j] == 'O') {
        sum += score;
        score++;
      } else score = 1;
    }
    printf("%d\n", sum);
  }
}
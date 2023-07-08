#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  int n[3];
  char c[4];

  for (int i=0; i<3; i++) {
    scanf("%d", &n[i]);
  }

  for (int i=0; i<3; i++) {
    for (int j=0; j<2-i; j++) {
      if (n[j] > n[j+1]) {
        swap(&n[j], &n[j+1]);
      }
    }
  }

  scanf("%s", c);

  for (int i=0; i<3; i++) {
    if (c[i] == 'A') printf("%d ", n[0]);
    else if (c[i] == 'B') printf("%d ", n[1]);
    else printf("%d ", n[2]);
  }
  return 0;
}
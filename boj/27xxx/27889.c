#include <stdio.h>

int main(void) {
  char name[4];

  scanf("%s", name);
  switch (name[0]) {
    case 'N': printf("North London Collegiate School"); break;
    case 'B': printf("Branksome Hall Asia"); break;
    case 'K': printf("Korea International School"); break;
    case 'S': printf("St. Johnsbury Academy"); break;
  }
  return 0;
}
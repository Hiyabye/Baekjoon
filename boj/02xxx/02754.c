#include <stdio.h>

int main(void) {
  double score = 0.0;
  char grade[2];

  scanf("%s", grade);
  switch(grade[0]) {
    case 'A': score = 4.0; break;
    case 'B': score = 3.0; break;
    case 'C': score = 2.0; break;
    case 'D': score = 1.0; break;
    case 'F': printf("0.0"); return 0;
  }
  switch(grade[1]) {
    case '+': score += 0.3; break;
    case '0': break;
    case '-': score -= 0.3; break;
  }
  printf("%.1lf", score);
  return 0;
}
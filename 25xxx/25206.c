#include <stdio.h>

int main(void) {
  char buffer[50], grade[2];
  double credit, totalGrade = 0.0, totalCredit = 0.0;

  for (int i=0; i<20; i++) {
    scanf("%s %lf %s", buffer, &credit, grade);
    if (grade[0] != 'P') {
      totalCredit += credit;
    }
    switch (grade[0]) {
    case 'A': totalGrade += credit * 4.0; break;
    case 'B': totalGrade += credit * 3.0; break;
    case 'C': totalGrade += credit * 2.0; break;
    case 'D': totalGrade += credit * 1.0; break;
    }
    if (grade[1] == '+') {
      totalGrade += credit * 0.5;
    }
  }
  printf("%lf", totalGrade / totalCredit);
  return 0;
}
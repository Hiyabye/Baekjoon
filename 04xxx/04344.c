#include <stdio.h>
 
int main(void) {
  int c, n, score[1000];

  scanf("%d", &c);
  for (int i=0; i<c; i++) {
    int sum = 0;
    scanf("%d", &n);
    for (int j=0; j<n; j++) {
      scanf("%d", &score[j]);
      sum += score[j];
    }
    double avg = (double)sum/n;

    int count = 0;
    for (int j=0; j<n; j++)
      if (avg < score[j])
        count++;

    printf("%.3f%%\n", (double)count*100/n);
  }
  return 0;
}
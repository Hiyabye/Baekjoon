#include <stdio.h>
#include <math.h>

int main(void) {
  int N, num;
  int max = -4001, min = 4001;
  int a[8001] = { 0 };
  double sum = 0.0;

  scanf("%d", &N);
  for (int i=0; i<N; i++) {
    scanf("%d", &num);
    a[num+4000]++;
    sum += num;
    if (num > max) max = num;
    if (num < min) min = num;
  }

  // 1st
  printf("%.0lf\n", floor(sum/N+0.5));

  // 2nd
  int count = 0, id = min;
  while (count <= N/2) {
    count += a[id+4000];
    id++;
  }
  printf("%d\n", id-1);

  // 3rd
  int maxCount = 0, moreThanOne = 0;
  for (int i=min; i<=max; i++) {
    if (a[i+4000] > maxCount) {
      maxCount = a[i+4000];
      id = i;
      moreThanOne = 0;
    } else if (moreThanOne==0 && a[i+4000]==maxCount) {
      id = i;
      moreThanOne = 1;
    }
  }
  printf("%d\n", id);

  // 4st
  printf("%d\n", max-min);
  return 0;
}
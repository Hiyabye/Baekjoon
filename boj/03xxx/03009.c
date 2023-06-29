#include <stdio.h>

int findAlone(int arr[]) {
  if (arr[0] == arr[1]) return arr[2];
  if (arr[1] == arr[2]) return arr[0];
  if (arr[2] == arr[0]) return arr[1];
}

int main(void) {
  int x[5], y[5];

  for (int i=0; i<3; i++)
    scanf("%d %d", &x[i], &y[i]);

  printf("%d %d", findAlone(x), findAlone(y));
  return 0;
}
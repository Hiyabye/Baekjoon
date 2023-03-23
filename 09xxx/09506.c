#include <stdio.h>

void solve(int n) {
  int sum = 0;

  for (int i=1; i<n; i++)
    if (n%i == 0)
      sum += i;

  if (sum != n) {
    printf("%d is NOT perfect.\n", n);
    return;
  }

  printf("%d = 1", n);
  for (int i=2; i<n; i++)
    if (n%i == 0)
      printf(" + %d", i);
  printf("\n");
}

int main(void) {
  int n;

  scanf("%d", &n);
  while (n != -1) {
    solve(n);
    scanf("%d", &n);
  }
  return 0;
}
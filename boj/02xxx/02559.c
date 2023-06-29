#include <stdio.h>

int main(void) {
  int n, k, temp;
  int sum[100000];

  scanf("%d %d", &n, &k);
  scanf("%d", &sum[0]);
  for (int i=1; i<n; i++) {
    scanf("%d", &temp);
    sum[i] = sum[i-1]+temp;
  }

  int max = sum[k-1];
  for (int i=k; i<n; i++)
    if (sum[i]-sum[i-k] > max)
      max = sum[i]-sum[i-k];

  printf("%d", max);
  return 0;
}
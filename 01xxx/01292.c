#include <stdio.h>

int main(void) {
  int a, b, n = 1, idx = 0;
  int arr[1000];

  while (idx < 1000) {
    for (int i=0; i<n; i++) {
      arr[idx] = n;
      if (++idx == 1000) break;
    }
    n++;
  }

  for (int i=1; i<1000; i++) {
    arr[i] += arr[i-1];
  }

  scanf("%d %d", &a, &b);
  if (a == 1) printf("%d", arr[b-1]);
  else printf("%d", arr[b-1] - arr[a-2]);
  return 0;
}
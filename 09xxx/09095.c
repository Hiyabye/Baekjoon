#include <stdio.h>

int factorial(int n) {
  int res = 1;
  for (int i=1; i<=n; i++) {
    res *= i;
  }
  return res;
}

int solve(int n) {
  int count = 0;
  
  for (int three=0; three<=n/3; three++) {
    for (int two=0; two<=(n-three*3)/2; two++) {
      int one = n-three*3-two*2;
      if (one>=0 && two>=0 && three>=0) {
        count += factorial(one+two+three)/factorial(one)/factorial(two)/factorial(three);
      }
    }
  }
  return count;
}

int main(void) {
  int t, n;

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%d", &n);
    printf("%d\n", solve(n));
  }
  return 0;
}
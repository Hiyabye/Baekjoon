#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[1001], s2[1001];
  int dp[1001][1001];

  scanf("%s", s1);
  scanf("%s", s2);
  int l1 = strlen(s1);
  int l2 = strlen(s2);

  for (int i=0; i<=l1; i++) dp[i][0] = 0;
  for (int i=0; i<=l2; i++) dp[0][i] = 0;

  for (int i=1; i<=l1; i++) {
    for (int j=1; j<=l2; j++) {
      if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
      else dp[i][j] = dp[i-1][j] > dp[i][j-1] ? dp[i-1][j] : dp[i][j-1];
    }
  }

  printf("%d", dp[l1][l2]);
  return 0;
}
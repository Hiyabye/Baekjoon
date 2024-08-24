#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> dp(n+1, 1);
  for (int i=2; i<=n; i++) {
    dp[i] = dp[i-1] + dp[i-2];
  }
  cout << dp[n] << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
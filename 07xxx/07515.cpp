#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;

  vector<int> dp(n+2, 0);
  dp[1] = 2; dp[2] = 3;
  for (int i=3; i<=n; i++) {
    dp[i] = dp[i-1] + dp[i-2];
  }
  cout << "Scenario " << idx << ":\n" << dp[n] << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
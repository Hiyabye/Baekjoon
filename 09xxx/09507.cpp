#include <iostream>
#include <vector>
using namespace std;

vector<long long> precompute(void) {
  vector<long long> dp(68, 0);
  dp[0] = dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;

  for (int i=4; i<=67; i++) {
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];
  }
  return dp;
}

void solve(vector<long long> &v) {
  int n; cin >> n;

  cout << v[n] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  vector<long long> v = precompute();
  int t; cin >> t;
  while (t--) solve(v);
  return 0;
}
#include <cmath>
#include <iostream>
#include <vector>
#define MOD 1000000
using namespace std;

vector<int> precompute(void) {
  vector<int> dp(1000001, 0); dp[0] = 1;
  for (int i=1; i<=1000000; i++) {
    int a = i - sqrt(i);
    int b = log(i);
    int c = i * sin(i) * sin(i);
    dp[i] = (dp[a] + dp[b] + dp[c]) % MOD;
  }
  return dp;
}

bool solve(const vector<int> &dp) {
  int n; cin >> n;
  if (n == -1) return false;

  cout << dp[n] << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> dp = precompute();
  while (solve(dp));
  return 0;
}
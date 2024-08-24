#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline void one(int n, vector<int> &dp, int a, int b) {
  for (int i=a; i<=n; i+=a) {
    dp[i] = max(dp[i], dp[i-a] + b);
  }
}

inline void two(int n, vector<int> &dp, int a, int b) {
  for (int i=a; i<=n; i++) {
    if (dp[i-a]) dp[i] = max(dp[i], dp[i-a] + b);
  }
}

void solve(void) {
  int n; cin >> n;

  vector<int> dp(n+1, 0);
  one(n, dp, 2, 1);
  one(n, dp, 3, 7);
  one(n, dp, 4, 4);
  one(n, dp, 5, 5);
  one(n, dp, 6, 9);
  one(n, dp, 7, 8);

  two(n, dp, 2, 1);
  two(n, dp, 3, 7);
  two(n, dp, 4, 4);
  two(n, dp, 5, 5);
  two(n, dp, 6, 9);
  two(n, dp, 7, 8);
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
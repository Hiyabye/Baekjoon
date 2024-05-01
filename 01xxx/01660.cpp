#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n) {
  return n*(n+1)*(n+2)/6;
}

void solve(void) {
  int n; cin >> n;

  vector<int> dp(n+1);
  for (int i=0; i<=n; i++) dp[i] = i;
  for (int i=2; calc(i)<=n; i++) {
    for (int j=calc(i); j<=n; j++) {
      dp[j] = min(dp[j], dp[j-calc(i)]+1);
    }
  }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
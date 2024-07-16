#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> precompute(void) {
  vector<int> f(22); f[0] = f[1] = 1;
  for (int i=2; i<=21; i++) {
    f[i] = f[i-1] + f[i-2];
  }
  return f;
}

void solve(vector<int> &f) {
  int n; cin >> n;

  vector<int> dp(n+1, 0);
  for (int i=2; i<=n; i++) {
    for (int j=2; j<=21; j++) {
      if (f[j] > i) break;
      dp[i] = max(dp[i], dp[i-f[j]] + f[j-1]);
    }
  }
  cout << (n+1)/2 << " " << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> f = precompute();
  solve(f);
  return 0;
}
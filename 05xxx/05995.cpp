#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int h, n; cin >> h >> n;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];

  vector<bool> dp(h+1, false); dp[0] = true;
  for (int i=0; i<n; i++) for (int j=h; j>=w[i]; j--) {
    if (dp[j-w[i]]) dp[j] = true;
  }

  for (int i=h; i>=0; i--) {
    if (dp[i]) {
      cout << i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
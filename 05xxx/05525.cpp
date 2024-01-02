#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, m;
  string s;
  cin >> n >> m >> s;

  vector<int> dp(m, 0);
  for (int i=0; i<m-2; i++) {
    if (s[i] == 'I' && s[i+1] == 'O' && s[i+2] == 'I') dp[i+2] = dp[i] + 1;
  }

  int ans = 0;
  for (int i=0; i<m; i++) {
    if (dp[i] >= n) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
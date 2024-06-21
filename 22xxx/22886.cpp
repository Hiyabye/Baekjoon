#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  int x, y; string s; cin >> x >> y >> s;

  vector<vector<int>> dp(s.length(), vector<int>(2, 1e9));
  if (s[0] == 'C' || s[0] == '?') dp[0][0] = 0;
  if (s[0] == 'J' || s[0] == '?') dp[0][1] = 0;

  for (int i=1; i<s.length(); i++) {
    if (s[i] == 'C' || s[i] == '?') dp[i][0] = min({dp[i][0], dp[i-1][0], dp[i-1][1] + y});
    if (s[i] == 'J' || s[i] == '?') dp[i][1] = min({dp[i][1], dp[i-1][1], dp[i-1][0] + x});
  }
  cout << "Case #" << idx << ": " << min(dp.back()[0], dp.back()[1]) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
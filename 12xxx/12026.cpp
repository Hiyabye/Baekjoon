#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(char a, char b) {
  return (a == 'B' && b == 'O') || (a == 'O' && b == 'J') || (a == 'J' && b == 'B');
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  vector<int> dp(n, 1e9); dp[0] = 0;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (check(s[i], s[j])) dp[j] = min(dp[j], dp[i] + (j-i)*(j-i));
  }
  cout << (dp[n-1] == 1e9 ? -1 : dp[n-1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
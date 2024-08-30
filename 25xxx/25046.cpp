#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<long long>> s(n, vector<long long>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> s[i][j];

  long long ans = -1e18;
  for (int mask=0; mask<(1<<n); mask++) {
    long long cur = 0;
    for (int i=0; i<n; i++) {
      long long a = 0, b = 0;
      for (int j=0; j<n; j++) {
        if (mask & (1 << j)) a += s[j][i];
        else b += s[j][i];
      }
      cur += min(a, b);
    }
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
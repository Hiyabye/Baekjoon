#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> v(n, 0);
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    for (char c : s) v[i] = v[i] * 2 + (c == 'T');
  }

  int ans = 0;
  for (int mask=0; mask<(1<<k); mask++) {
    int cur = 1e9;
    for (int i=0; i<n; i++) {
      cur = min(cur, k - __builtin_popcount(mask ^ v[i]));
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
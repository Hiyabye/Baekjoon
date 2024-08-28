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
    for (char c : s) v[i] |= (1 << (c - 'a'));
  }

  int ans = 0;
  for (int mask=0; mask<(1<<26); mask++) {
    if (__builtin_popcount(mask) != k) continue;
    int cnt = 0;
    for (int i=0; i<n; i++) {
      if ((v[i] & mask) == v[i]) cnt++;
    }
    ans = max(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
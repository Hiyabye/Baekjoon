#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<long long> v(n);
  for (int i=0; i<n; i++) {
    string a, b; cin >> a >> b;
    long long x = 0;
    for (char c : b) {
      x = x * 2 + (c == 'Y');
    }
    v[i] = x;
  }

  int ans = 1e9, cnt = 0;
  for (int mask=0; mask<(1<<n); mask++) {
    long long x = 0;
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) x |= v[i];
    }
    if (__builtin_popcountll(x) > cnt) {
      cnt = __builtin_popcountll(x);
      ans = __builtin_popcount(mask);
    } else if (__builtin_popcountll(x) == cnt) {
      ans = min(ans, __builtin_popcount(mask));
    }
  }
  cout << (cnt == 0 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool same(const string &s) {
  for (int i=1; i<s.length(); i++) {
    if (s[i] != s[0]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  vector<long long> a(6);
  for (int i=0; i<6; i++) cin >> a[i];
  long long o; cin >> o;

  long long ans = 0;
  for (int i=0; i<n; i++) {
    long long p = o;
    if (same(v[i])) {
      if (v[i][0] == 'P') p = min(p, a[0]);
      if (v[i][0] == 'C') p = min(p, a[1]);
      if (v[i][0] == 'V') p = min(p, a[2]);
      if (v[i][0] == 'S') p = min(p, a[3]);
      if (v[i][0] == 'G') p = min(p, a[4]);
      if (v[i][0] == 'F') p = min(p, a[5]);
    }
    ans += v[i].length() * p;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
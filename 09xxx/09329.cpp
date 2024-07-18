#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Prize {
  int k;
  vector<int> s;
  int x;
};

void solve(void) {
  int n, m; cin >> n >> m;
  vector<Prize> p(n);
  for (int i=0; i<n; i++) {
    cin >> p[i].k;
    p[i].s.resize(p[i].k);
    for (int j=0; j<p[i].k; j++) cin >> p[i].s[j], p[i].s[j]--;
    cin >> p[i].x;
  }
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    int cnt = 1e9;
    for (int j=0; j<p[i].k; j++) {
      cnt = min(cnt, v[p[i].s[j]]);
    }
    ans += cnt * p[i].x;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
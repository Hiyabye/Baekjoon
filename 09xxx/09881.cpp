#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, const vector<int> &v, int l, int r) {
  int ret = 0;
  for (int i=0; i<n; i++) {
    if (v[i] < l) ret += (l-v[i])*(l-v[i]);
    if (v[i] > r) ret += (v[i]-r)*(v[i]-r);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int mx = v[0], mn = v[0];
  for (int i=1; i<n; i++) {
    mx = max(mx, v[i]);
    mn = min(mn, v[i]);
  }

  int ans = 1e9;
  for (int i=mn; i<=mx-17; i++) {
    ans = min(ans, calc(n, v, i, i+17));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
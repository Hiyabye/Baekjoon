#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calc(vector<int> &v, int mid) {
  int ret = 0;
  for (int i=1; i<v.size(); i++) {
    int d = v[i] - v[i-1];
    int cnt = d / mid;
    if (cnt > 0) ret += cnt - (d % mid == 0);
  }
  return ret;
}

void solve(void) {
  int n, m, l; cin >> n >> m >> l;
  vector<int> v(n+2); v[0] = 0; v[n+1] = l;
  for (int i=1; i<=n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int lo = 1, hi = l-1, ans = 1e9;
  while (lo <= hi) {
    int mid = (lo + hi) / 2;
    if (calc(v, mid) > m) lo = mid + 1;
    else {
      hi = mid - 1;
      ans = min(mid, ans);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, const vector<int> &v, int sz) {
  int ret = 1, cur = 0;
  for (int i=0; i<n; i++) {
    if (cur + v[i] > sz) {
      ret++;
      cur = 0;
    }
    cur += v[i];
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int lo = *max_element(v.begin(), v.end()), hi = 1e9;
  while (lo < hi) {
    int mid = (lo + hi) / 2;
    if (calc(n, v, mid) <= m) hi = mid;
    else lo = mid + 1;
  }
  cout << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
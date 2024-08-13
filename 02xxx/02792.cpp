#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, int m, const vector<int> &v, int sz) {
  int ret = 0;
  for (int i=0; i<m; i++) {
    ret += v[i] / sz;
    if (v[i] % sz) ret++;
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  int lo = 1, hi = 1e9;
  while (lo < hi) {
    int mid = (lo + hi) / 2;
    if (calc(n, m, v, mid) > n) lo = mid + 1;
    else hi = mid;
  }
  cout << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
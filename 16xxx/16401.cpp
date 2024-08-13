#include <iostream>
#include <vector>
using namespace std;

inline int calc(int m, int n, const vector<int> &l, long long sz) {
  long long ret = 0;
  for (int i=0; i<n; i++) ret += l[i] / sz;
  return ret;
}

void solve(void) {
  int m, n; cin >> m >> n;
  vector<int> l(n);
  for (int i=0; i<n; i++) cin >> l[i];

  long long lo = 0, hi = 1e9;
  while (lo < hi) {
    long long mid = (lo + hi + 1) / 2;
    if (calc(m, n, l, mid) >= m) lo = mid;
    else hi = mid - 1;
  }
  cout << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
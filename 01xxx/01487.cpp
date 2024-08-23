#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, const vector<int> &a, const vector<int> &b, int idx) {
  int ret = 0;
  for (int i=0; i<n; i++) {
    if (a[i] < a[idx]) continue;
    ret += max(0, a[idx] - b[i]);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  int ans = 0, cur = 0;
  for (int i=0; i<n; i++) {
    int p = calc(n, a, b, i);
    if (p < cur) continue;
    if (p > cur || a[i] < ans) ans = a[i], cur = p;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
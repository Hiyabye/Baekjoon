#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, const vector<int> &a, int b) {
  int l = 0, r = n-1;
  while (l < r) {
    int m = (l + r) / 2;
    if (a[m] < b) l = m + 1;
    else r = m;
  }
  return min(abs(a[l] - b), abs(a[l-1] - b));
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int ans = 1e9;
  while (m--) {
    int b; cin >> b;
    ans = min(ans, calc(n, a, b));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
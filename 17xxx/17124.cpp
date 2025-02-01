#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int m, const vector<int> &b, int x) {
  int l = 0, r = m-1;
  while (l + 1 < r) {
    int m = (l + r) / 2;
    if (b[m] < x) l = m;
    else r = m;
  }
  return x - b[l] <= b[r] - x ? b[l] : b[r];
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];
  sort(b.begin(), b.end());

  long long sum = 0;
  for (int i=0; i<n; i++) {
    sum += calc(m, b, a[i]);
  }
  cout << sum << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
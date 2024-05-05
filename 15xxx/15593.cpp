#include <iostream>
#include <vector>
using namespace std;

int calc(const vector<int> &t, int l, int r) {
  int ret = 1000;
  for (int i=l; i<r; i++) {
    if (t[i] == 1) ret--;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> l(n), r(n);
  for (int i=0; i<n; i++) cin >> l[i] >> r[i];

  vector<int> t(1000, 0);
  for (int i=0; i<n; i++) {
    for (int j=l[i]; j<r[i]; j++) t[j]++;
  }

  int zero = 0;
  for (int i=0; i<1000; i++) {
    if (t[i] == 0) zero++;
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans = max(ans, calc(t, l[i], r[i]));
  }
  cout << ans - zero;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
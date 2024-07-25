#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int a, int b, int c) {
  int ret = 0;
  while (c-- && a > 0) {
    ret += a;
    a -= b;
  }
  return ret;
}

void solve(void) {
  int m, dm; cin >> m >> dm;
  int h, dh; cin >> h >> dh;
  int n; cin >> n;
  vector<int> c(n), b(n);
  for (int i=0; i<n; i++) cin >> c[i] >> b[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += max(calc(m, dm, c[i]), calc(h, dh, b[i]));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
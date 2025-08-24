#include <iostream>
#include <string>
using namespace std;

inline int calc(int k, int m) {
  int ret = 0;
  while (m >= k) {
    m -= k; ret++; m += 2;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int tot = 0, mx = 0;
  string ans = "";
  while (n--) {
    string p; int k, m; cin >> p >> k >> m;
    tot += calc(k, m);
    if (calc(k, m) > mx) ans = p, mx = calc(k, m);
  }
  cout << tot << "\n" << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
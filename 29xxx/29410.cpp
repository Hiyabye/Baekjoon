#include <iostream>
using namespace std;

inline int calc(int a, int b, int c) {
  if (c == 0) return a;
  int ret = 0;
  while (c > 0) {
    ret += (c & 1) ? b : a;
    c >>= 1;
  }
  return ret;
}

void solve(void) {
  int n, a, b; cin >> n >> a >> b;

  int ans = 0;
  while (n--) {
    int m; cin >> m;
    while (m--) {
      int c; cin >> c;
      ans += calc(a, b, c);
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
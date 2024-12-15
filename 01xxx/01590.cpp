#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;

  int ans = -1;
  while (n--) {
    int s, i, c; cin >> s >> i >> c;
    int l = 0, r = c - 1;
    while (l <= r) {
      int m = (l + r) / 2;
      int k = s + i * m;
      if (k < t) {
        l = m + 1;
      } else {
        r = m - 1;
        if (ans == -1 || k < ans) ans = k;
      }
    }
  }
  cout << (ans == -1 ? -1 : ans - t);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
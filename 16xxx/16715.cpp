#include <iostream>
using namespace std;

inline int calc(int n, int b) {
  int ret = 0;
  while (n) ret += n % b, n /= b;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int ans = 2;
  for (int i=3; i<=n; i++) {
    if (calc(n, i) > calc(n, ans)) ans = i;
  }
  cout << calc(n, ans) << " " << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
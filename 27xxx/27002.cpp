#include <iostream>
using namespace std;

inline int calc(int x) {
  int ret = 1;
  for (int i=2; i*i<=x; i++) {
    if (x % i) continue;
    ret = i;
    while (!(x % i)) x /= i;
  }
  if (x > ret) ret = x;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0, val = 0;
  while (n--) {
    int x; cin >> x;
    if (calc(x) > val) {
      val = calc(x);
      ans = x;
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
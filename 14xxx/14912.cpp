#include <iostream>
using namespace std;

int calc(int n, int d) {
  int ret = 0;
  while (n) {
    if (n % 10 == d) ret++;
    n /= 10;
  }
  return ret;
}

void solve(void) {
  int n, d; cin >> n >> d;

  int ans = 0;
  for (int i=1; i<=n; i++) {
    ans += calc(i, d);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
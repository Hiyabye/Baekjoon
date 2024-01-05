#include <iostream>
using namespace std;

int cnt(int n) {
  int ret = 0;
  while (n) {
    if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) ret++;
    n /= 10;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i<=n; i++) {
    ans += cnt(i);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
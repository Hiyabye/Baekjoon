#include <iostream>
using namespace std;

int phi(int n) {
  int ret = n;
  for (int i=2; i*i<=n; ++i) {
    if (n % i) continue;
    ret -= ret / i;
    while (!(n % i)) n /= i;
  }
  if (n > 1) ret -= ret / n;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int ans = -1;
  for (int i=1; i<=n; i++) ans += phi(i);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

inline int digit(int x) {
  int ret = 0;
  while (x) x /= 10, ret++;
  return ret;
}

void solve(void) {
  int n, k; cin >> n >> k;

  long long ans = 0;
  for (int i=1; i<=n; i++) {
    for (int j=0; j<digit(i); j++) ans *= 10;
    ans = (ans + i) % k;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
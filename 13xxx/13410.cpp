#include <iostream>
#include <algorithm>
using namespace std;

int mul(int a, int b) {
  int ret = 0, tmp = a * b;
  while (tmp) {
    ret = ret * 10 + tmp % 10;
    tmp /= 10;
  }
  return ret;
}

void solve(void) {
  int n, k; cin >> n >> k;

  int ans = 0;
  for (int i=1; i<=k; i++) ans = max(ans, mul(n, i));
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

void solve(void) {
  int n, k;

  while (cin >> n >> k) {
    int ans = 0, cnt = 0;
    while (n > 0) {
      ans += n;
      cnt += n;
      n = cnt / k;
      cnt %= k;
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
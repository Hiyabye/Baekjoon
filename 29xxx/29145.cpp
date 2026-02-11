#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  long long ans = 0;
  while (n--) {
    int a, b, c; cin >> a >> b >> c;
    if (k >= a && (k - a) % b == 0) ans += c;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
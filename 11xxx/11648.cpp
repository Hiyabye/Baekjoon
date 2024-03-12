#include <iostream>
using namespace std;

int calc(int n) {
  int ret = 1;
  while (n) {
    ret *= n % 10;
    n /= 10;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n >= 10) n = calc(n), ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
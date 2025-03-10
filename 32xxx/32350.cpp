#include <iostream>
using namespace std;

void solve(void) {
  int n, d, p; cin >> n >> d >> p;

  int ans = 0, h = 0;
  while (n--) {
    int a; cin >> a; a += h;
    if (a <= 0) { h = 0; continue; }
    while (a > 0) a -= d, ans++;
    h = a * p / 100;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
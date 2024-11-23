#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;
  int a; cin >> a;
  int b; cin >> b;

  int ans = 0;
  if (a == 1) ans += x;
  if (b == 1) {
    int c = (a == 1) ? 1 : x;
    while (c--) {
      int d; cin >> d;
      if (d == 1) ans++;
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
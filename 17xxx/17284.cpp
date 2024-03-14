#include <iostream>
using namespace std;

void solve(void) {
  int ans = 5000;

  int x;
  while (cin >> x) {
    if (x == 1) ans -= 500;
    else if (x == 2) ans -= 800;
    else if (x == 3) ans -= 1000;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
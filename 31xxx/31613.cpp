#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;
  int n; cin >> n;

  int ans = 0;
  while (x < n) {
    switch (x % 3) {
      case 0: x++; break;
      case 1: x *= 2; break;
      case 2: x *= 3; break;
    }
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
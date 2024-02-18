#include <iostream>
using namespace std;

void solve(void) {
  int l; cin >> l;
  int r; cin >> r;

  int ans = 0, exp = 1;
  while (l * r / 100 > 5) {
    l = l * r / 100;
    ans += l * (1 << exp++);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

void solve(void) {
  int l, h; cin >> l >> h;

  cout << h - (l % 2 == 0 && h % 2 == 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
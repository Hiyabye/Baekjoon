#include <iostream>
using namespace std;

void solve(void) {
  int x, y;
  cin >> x >> y;

  if (x > 0) {
    if (y > 0) cout << 1;
    else cout << 4;
  } else {
    if (y > 0) cout << 2;
    else cout << 3;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
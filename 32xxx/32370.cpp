#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int x, y; cin >> x >> y;

  if (a && b) cout << 2;
  else if (!a && !x && y < b) cout << 3;
  else if (!b && !y && x < a) cout << 3;
  else cout << 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
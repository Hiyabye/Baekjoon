#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;
  int y; cin >> y;

  cout << x + y + 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
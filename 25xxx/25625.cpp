#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  cout << (x > y ? y + x : y - x);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
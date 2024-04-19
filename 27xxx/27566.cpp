#include <iostream>
using namespace std;

void solve(void) {
  int r, f; cin >> r >> f;

  cout << ((f + r / 2) / r & 1 ? "down" : "up");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
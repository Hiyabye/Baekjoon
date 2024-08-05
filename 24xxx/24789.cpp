#include <iostream>
using namespace std;

bool solve(void) {
  int x, y; cin >> x >> y;

  return y % 2 == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "possible" : "impossible");
  return 0;
}
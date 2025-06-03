#include <iostream>
using namespace std;

inline int calc(int n) {
  return n ? 10 * calc(n-1) + 1 : 0;
}

void solve(void) {
  int x, y; cin >> x >> y;

  cout << calc(x) + calc(y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
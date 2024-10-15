#include <iostream>
using namespace std;

inline int calc(void) {
  int a, b, c; cin >> a >> b >> c;
  return a + b * 2 + c * 3;
}

void solve(void) {
  int a = calc(), b = calc();

  cout << (a > b ? 1 : a < b ? 2 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
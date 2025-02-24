#include <iostream>
using namespace std;

inline int calc(int x) {
  return (x / 100 + x % 100) * (x / 100 + x % 100);
}

void solve(void) {
  int x; cin >> x;

  do x++; while (x < 10000 && x != calc(x));
  cout << (x == 10000 ? -1 : x);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
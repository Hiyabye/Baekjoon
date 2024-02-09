#include <algorithm>
#include <iostream>
using namespace std;

inline int square(int x) {
  return x * x;
}

void solve(void) {
  int a1, b1, c1, d1; cin >> a1 >> b1 >> c1 >> d1;
  int a2, b2, c2, d2; cin >> a2 >> b2 >> c2 >> d2;

  cout << square(max(max(c1, c2)-min(a1, a2), max(d1, d2)-min(b1, b2)));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
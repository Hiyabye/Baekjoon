#include <iostream>
using namespace std;

int solve(void) {
  int x, y, p1, p2; cin >> x >> y >> p1 >> p2;

  for (int i=0; i<=1000; i++) for (int j=0; j<=1000; j++) {
    if (p1 + x * i == p2 + y * j) return p1 + x * i;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
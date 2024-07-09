#include <iostream>
using namespace std;

inline bool leap(int y) {
  return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

void solve(void) {
  int n; cin >> n;
  int w; cin >> w;

  cout << (leap(n) ? 30 : 29);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

void solve(void) {
  int a = 0, b = 0;
  for (int i=0; i<9; i++) {
    int x, y; cin >> x >> y;
    a += x; b += y;
  }
  cout << (a > b ? "Yonsei\n" : (a < b ? "Korea\n" : "Draw\n"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
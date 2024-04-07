#include <iostream>
using namespace std;

void solve(void) {
  int n, x, y; cin >> n >> x >> y;
  int a, b; cin >> a;
  while (--n) cin >> b;

  cout << (a == x ? (b == y ? "BOTH" : "EASY") : (b == y ? "HARD" : "OKAY")) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
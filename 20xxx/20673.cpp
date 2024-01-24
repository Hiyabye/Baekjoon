#include <iostream>
using namespace std;

void solve(void) {
  int p; cin >> p;
  int q; cin >> q;

  cout << (p <= 50 && q <= 10 ? "White" : q > 30 ? "Red" : "Yellow");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
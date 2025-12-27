#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;

  cout << ((a + b <= d) ? ((c <= d) ? "~.~" : "Shuttle") : ((c <= d) ? "Walk" : "T.T"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
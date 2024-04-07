#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int c, d; cin >> c >> d;
  int t; cin >> t;

  int ans = t - abs(a-c) - abs(b-d);
  cout << (ans >= 0 && !(ans & 1) ? 'Y' : 'N');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
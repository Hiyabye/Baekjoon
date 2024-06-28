#include <iostream>
using namespace std;

void solve(void) {
  int g, p, t; cin >> g >> p >> t;

  cout << ((g - t) * p < g ? 1 : (g - t) * p > g ? 2 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
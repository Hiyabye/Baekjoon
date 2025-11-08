#include <iostream>
using namespace std;

void solve(void) {
  int x, y, z; cin >> x >> y >> z;
  int u, v, w; cin >> u >> v >> w;

  cout << (u+99)/100*x + (v+49)/50*y + (w+19)/20*z;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
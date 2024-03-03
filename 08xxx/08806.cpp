#include <iostream>
using namespace std;

void solve(void) {
  double x1, y1, z1; cin >> x1 >> y1 >> z1;
  double x2, y2, z2; cin >> x2 >> y2 >> z2;

  double a = x1 * y2 + y1 * z2 + z1 * x2;
  double g = x2 * y1 + y2 * z1 + z2 * x1;
  cout << (a > g ? "ADAM" : (a < g ? "GOSIA" : "=")) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}
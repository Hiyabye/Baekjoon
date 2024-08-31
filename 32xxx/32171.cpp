#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  
  int x_min = 1e9, x_max = -1e9, y_min = 1e9, y_max = -1e9;
  while (n--) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    x_min = min(x_min, a);
    y_min = min(y_min, b);
    x_max = max(x_max, c);
    y_max = max(y_max, d);
    cout << 2 * (x_max - x_min + y_max - y_min) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, x, y; cin >> a >> b >> c >> x >> y;

  cout << min({a*x+b*y, 2*c*max(x, y), 2*c*min(x, y)+a*(x-min(x, y))+b*(y-min(x, y))});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
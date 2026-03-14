#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  int a, b; cin >> a >> b;
  int x, y; cin >> x >> y;

  int mnx = max(0, -x), mxx = min(m, a-x);
  int mny = max(0, -y), mxy = min(n, b-y);

  if (mnx >= mxx || mny >= mxy) cout << "NEPATAIKYS";
  else cout << mnx + x + mny + y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int rh, rv, sh, sv; cin >> rh >> rv >> sh >> sv;
  int n; cin >> n;

  int ans = 1e9;
  while (n--) {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int f = max((rh+a-1)/a, (sh+c-1)/c) * max((rv+b-1)/b, (sv+d-1)/d) * e;
    int g = max((rh+b-1)/b, (sh+d-1)/d) * max((rv+a-1)/a, (sv+c-1)/c) * e;
    ans = min({ans, f, g});
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int b, c, d; cin >> b >> c >> d;
  vector<int> x(b), y(c), z(d);
  for (int i=0; i<b; i++) cin >> x[i];
  for (int i=0; i<c; i++) cin >> y[i];
  for (int i=0; i<d; i++) cin >> z[i];

  sort(x.begin(), x.end(), greater<int>());
  sort(y.begin(), y.end(), greater<int>());
  sort(z.begin(), z.end(), greater<int>());

  cout << accumulate(x.begin(), x.end(), 0) +
          accumulate(y.begin(), y.end(), 0) +
          accumulate(z.begin(), z.end(), 0) << "\n";

  int ans = 0;
  for (int i=0; i<min({b, c, d}); i++) {
    ans += (x[i] + y[i] + z[i]) * 9 / 10;
  }
  for (int i=min({b, c, d}); i<max({b, c, d}); i++) {
    if (i < b) ans += x[i];
    if (i < c) ans += y[i];
    if (i < d) ans += z[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
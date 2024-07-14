#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int w, h, n; cin >> w >> h >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int ans = 0;
  for (int i=1; i<n; i++) {
    int dx = x[i] - x[i-1], dy = y[i] - y[i-1];
    if (dx * dy < 0) {
      ans += abs(dx) + abs(dy);
    } else {
      ans += max(abs(dx), abs(dy));
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
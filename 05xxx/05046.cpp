#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, b, h, w; cin >> n >> b >> h >> w;
  vector<int> p(h);
  vector<vector<int>> a(h, vector<int>(w));
  for (int i=0; i<h; i++) {
    cin >> p[i];
    for (int j=0; j<w; j++) cin >> a[i][j];
  }

  int ans = 1e9;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (a[i][j] >= n) ans = min(ans, n * p[i]);
  }

  if (ans > b) cout << "stay home";
  else cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
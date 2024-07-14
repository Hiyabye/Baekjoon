#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calc(int h, int w, const vector<vector<int>> &a, int y, int x) {
  int ret = 0;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    ret += min(abs(i-y), abs(j-x)) * a[i][j];
  }
  return ret;
}

void solve(void) {
  int h, w; cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> a[i][j];

  int ans = 1e9;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    ans = min(ans, calc(h, w, a, i, j));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
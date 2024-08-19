#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(const vector<vector<int>> &a, int y, int x) {
  vector<int> v(9);
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) v[i*3+j] = a[y+i][x+j];
  sort(v.begin(), v.end());
  return v[4];
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<int>> a(r, vector<int>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> a[i][j];
  int t; cin >> t;

  int ans = 0;
  for (int i=0; i<r-2; i++) for (int j=0; j<c-2; j++) {
    if (calc(a, i, j) >= t) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
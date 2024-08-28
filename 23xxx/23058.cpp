#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, vector<vector<int>> v, int mask) {
  for (int i=0; i<n; i++) {
    if (mask & (1 << i)) continue;
    for (int j=0; j<n; j++) {
      v[i][j] = 1 - v[i][j];
    }
  }
  for (int j=0; j<n; j++) {
    if (mask & (1 << (j+n))) continue;
    for (int i=0; i<n; i++) {
      v[i][j] = 1 - v[i][j];
    }
  }
  int cnt = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j] == 1) cnt++;
  }
  return __builtin_popcount(mask) + min(cnt, n*n-cnt);
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int ans = 1e9;
  for (int mask=0; mask<(1<<(2*n)); mask++) {
    ans = min(ans, calc(n, v, mask));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
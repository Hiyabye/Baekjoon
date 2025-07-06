#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dx[8] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[8] = {2, -2, 1, -1, 2, -2, 1, -1};

inline bool valid(int n, int mask) {
  vector<vector<bool>> v(n, vector<bool>(n, false));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (mask & (1 << (i*n+j))) v[i][j] = true;
  }
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (!v[i][j]) continue;
    for (int k=0; k<8; k++) {
      int nx = i + dx[k], ny = j + dy[k];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
      if (v[nx][ny]) return false;
    }
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  int ans = 0;
  for (int mask=0; mask<(1<<(n*n)); mask++) {
    if (!valid(n, mask)) continue;
    int sum = 0;
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
      if (mask & (1 << (i*n+j))) sum += a[i][j];
    }
    ans = max(ans, sum);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
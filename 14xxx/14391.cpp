#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 0;
  for (int mask=0; mask<(1<<(n*m)); mask++) {
    int sum = 0;
    for (int i=0; i<n; i++) {
      int cur = 0;
      for (int j=0; j<m; j++) {
        if (mask & (1 << (i*m+j))) {
          cur = cur * 10 + v[i][j] - '0';
        } else {
          sum += cur;
          cur = 0;
        }
      }
      sum += cur;
    }
    for (int i=0; i<m; i++) {
      int cur = 0;
      for (int j=0; j<n; j++) {
        if (mask & (1 << (j*m+i))) {
          sum += cur;
          cur = 0;
        } else {
          cur = cur * 10 + v[j][i] - '0';
        }
      }
      sum += cur;
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
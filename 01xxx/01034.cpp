#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calc(int n, int m, vector<vector<char>> v, int k, int idx) {
  int cnt = 0;
  for (int i=0; i<m; i++) cnt += v[idx][i] == '0';
  if (cnt > k || (k - cnt) % 2 == 1) return 0;

  for (int i=0; i<m; i++) {
    if (v[idx][i] == '1') continue;
    for (int j=0; j<n; j++) {
      v[j][i] = v[j][i] == '1' ? '0' : '1';
    }
  }

  int ret = 0;
  for (int i=0; i<n; i++) {
    bool flag = true;
    for (int j=0; j<m; j++) {
      if (v[i][j] == '0') {
        flag = false;
        break;
      }
    }
    if (flag) ret++;
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];
  int k; cin >> k;

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans = max(ans, calc(n, m, v, k, i));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  vector<vector<int>> ans(n, vector<int>(n, 0));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j] == '.') continue;
    for (int dy=-1; dy<=1; dy++) for (int dx=-1; dx<=1; dx++) {
      int ny = i + dy, nx = j + dx;
      if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
      ans[ny][nx] += v[i][j] - '0';
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (v[i][j] != '.') cout << '*';
      else if (ans[i][j] > 9) cout << 'M';
      else cout << ans[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void solve(void) {
  int n, m; cin >> n >> m;
  vector<string> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) for (int k=0; k<4; k++) {
    int nx = i + dx[k], ny = j + dy[k];
    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
    if (s[i][j] == 'X' && s[nx][ny] == 'Y') ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
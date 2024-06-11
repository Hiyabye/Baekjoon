#include <iostream>
#include <vector>
using namespace std;

int dy[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dx[8] = {1, 0, -1, 1, -1, 1, 0, -1};

int calc(int n, const vector<vector<char>> &v, int y, int x) {
  int ret = 0;
  for (int i=0; i<8; i++) {
    bool flag = true;
    for (int j=0; j<5; j++) {
      int ny = y + dy[i] * j;
      int nx = x + dx[i] * j;
      if (ny < 0 || ny >= n || nx < 0 || nx >= n || v[ny][nx] != "MOBIS"[j]) {
        flag = false;
        break;
      }
    }
    if (flag) ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    ans += calc(n, v, i, j);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
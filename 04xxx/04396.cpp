#include <iostream>
#include <vector>
using namespace std;

int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, -1, 1};

char calc(int n, vector<vector<char>> &a, int x, int y) {
  char ret = '0';
  for (int i=0; i<8; i++) {
    int nx = x + dx[i], ny = y + dy[i];
    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
    if (a[nx][ny] == '*') ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<char>> a(n, vector<char>(n)), b(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> b[i][j];

  bool flag = false;
  vector<vector<char>> ans(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (a[i][j] == '*' && b[i][j] == 'x') { flag = true; continue; }
    ans[i][j] = (b[i][j] == 'x' ? calc(n, a, i, j) : '.');
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << (flag && a[i][j] == '*' ? '*' : ans[i][j]);
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
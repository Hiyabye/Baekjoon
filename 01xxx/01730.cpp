#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int y = 0, x = 0;
  vector<vector<int>> ans(n, vector<int>(n, 0));
  for (char c : s) {
    int d = "UDLR"s.find(c);
    int ny = y + dy[d], nx = x + dx[d];
    if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
    ans[y][x] |= (d < 2 ? 1 : 2);
    ans[ny][nx] |= (d < 2 ? 1 : 2);
    y = ny, x = nx;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << (ans[i][j] & 1 ? (ans[i][j] & 2 ? "+" : "|") : (ans[i][j] & 2 ? "-" : "."));
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
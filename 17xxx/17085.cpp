#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void on(vector<vector<char>> &v, int y, int x, int sz) {
  for (int i=0; i<4; i++) for (int j=0; j<=sz; j++) {
    v[y+dy[i]*j][x+dx[i]*j] = '#';
  }
}

void off(vector<vector<char>> &v, int y, int x, int sz) {
  for (int i=0; i<4; i++) for (int j=0; j<=sz; j++) {
    v[y+dy[i]*j][x+dx[i]*j] = '.';
  }
}

bool ok(const vector<vector<char>> &v, int y, int x, int sz) {
  for (int i=0; i<4; i++) for (int j=0; j<=sz; j++) {
    int ny = y+dy[i]*j, nx = x+dx[i]*j;
    if (ny<0 || ny>=v.size() || nx<0 || nx>=v[0].size() || v[ny][nx] != '#') return false;
  }
  return true;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = 0;
  for (int a=0; a<=7; a++) for (int b=a; b<=n-a; b++) for (int c=a; c<=m-a; c++) {
    if (!ok(v, b, c, a)) continue;
    off(v, b, c, a);
    for (int d=0; d<=7; d++) for (int e=d; e<=n-d; e++) for (int f=d; f<=m-d; f++) {
      if (!ok(v, e, f, d)) continue;
      ans = max(ans, (a*4+1)*(d*4+1));
    }
    on(v, b, c, a);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
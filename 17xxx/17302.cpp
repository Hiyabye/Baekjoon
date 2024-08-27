#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<bool>> v(n, vector<bool>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    char c; cin >> c;
    v[i][j] = c == 'W';
  }

  for (int y=0; y<n; y++) for (int x=0; x<m; x++) for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
    v[ny][nx] = !v[ny][nx];
  }

  cout << "1\n";
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << (v[i][j] ? '2' : '3');
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
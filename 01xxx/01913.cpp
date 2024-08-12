#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;

  int x = n / 2, y = n / 2, d = 0, cnt = 1;
  vector<vector<int>> ans(n, vector<int>(n, 0)); ans[y][x] = cnt++;
  for (int i=1; i<n; i++) {
    for (int j=0; j<i; j++) {
      int ny = y + dy[d], nx = x + dx[d];
      ans[ny][nx] = cnt++;
      y = ny, x = nx;
    }
    d = (d + 1) % 4;
    for (int j=0; j<i; j++) {
      int ny = y + dy[d], nx = x + dx[d];
      ans[ny][nx] = cnt++;
      y = ny, x = nx;
    }
    d = (d + 1) % 4;
  }
  for (int i=0; i<n-1; i++) {
    int ny = y + dy[d], nx = x + dx[d];
    ans[ny][nx] = cnt++;
    y = ny, x = nx;
  }

  int a = 0, b = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (ans[i][j] == m) {
        a = i + 1, b = j + 1;
        break;
      }
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
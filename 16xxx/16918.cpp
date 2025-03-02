#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void solve(void) {
  int r, c, n; cin >> r >> c >> n; n--;
  vector<vector<int>> v(r, vector<int>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    char x; cin >> x;
    v[i][j] = x == 'O' ? 2 : 0;
  }

  while (n--) {
    for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
      v[i][j] = v[i][j] ? v[i][j] - 1 : 3;
    }
    vector<vector<int>> tmp = v;
    for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
      if (v[i][j]) continue;
      for (int k=0; k<4; k++) {
        int nx = i + dx[k], ny = j + dy[k];
        if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
        tmp[nx][ny] = 0;
      }
    }
    v = tmp;
  }

  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      cout << (v[i][j] ? 'O' : '.');
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
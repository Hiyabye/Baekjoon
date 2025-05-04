#include <iostream>
#include <vector>
using namespace std;

int dr[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc[8] = {0, -1, -1, -1, 0, 1, 1, 1};

bool solve(void) {
  int r, c; cin >> r >> c;
  if (r == 0 && c == 0) return false;
  vector<vector<char>> v(r+2, vector<char>(c+2, '.'));
  for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) cin >> v[i][j];

  for (int i=1; i<=r; i++) {
    for (int j=1; j<=c; j++) {
      if (v[i][j] == '*') cout << '*';
      else {
        int cnt = 0;
        for (int k=0; k<8; k++) {
          cnt += v[i+dr[k]][j+dc[k]] == '*';
        }
        cout << cnt;
      }
    }
    cout << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char> > v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int row = 0;
  for (int i=0; i<n; i++) {
    bool flag = true;
    for (int j=0; j<m; j++) {
      if (v[i][j] == 'X') {
        flag = false;
        break;
      }
    }
    if (flag) row++;
  }

  int col = 0;
  for (int i=0; i<m; i++) {
    bool flag = true;
    for (int j=0; j<n; j++) {
      if (v[j][i] == 'X') {
        flag = false;
        break;
      }
    }
    if (flag) col++;
  }

  cout << max(row, col);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<vector<char>> &v, int x, int y) {
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    if (v[x-i][y-j] != '.') return false;
  }
  return true;
}

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int cnt = 0;
  for (int i=2; i<n; i++) for (int j=2; j<m; j++) {
    if (!check(v, i, j)) continue;
    for (int a=0; a<3; a++) for (int b=0; b<3; b++) v[i-a][j-b] = 'x';
    cnt++;
  }

  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (v[i][j] == '.') cnt++;
  }
  return cnt % 2 == 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "sewon" : "pizza") << "\n";
  return 0;
}
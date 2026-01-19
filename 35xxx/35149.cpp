#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (v[i][j] == '#') a++;
    if (v[i][j] == 'U' || v[i][j] == 'D' || v[i][j] == 'L' || v[i][j] == 'R') b++;
    if (v[i][j] == 'A') c++;
    if (v[i][j] == 'V') d++;
    if (v[i][j] == 'S') e++;
    if (v[i][j] == 'E') f++;
  }

  if (e != 1 || f != 1) return -1;
  if (a <= 1 && b <= 1 && c == 0 && d == 0) return 1;
  if (c == 0 && d == 0) return 2;
  if (c == 0) return 3;
  return 4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=0; j<n; j++) cnt += (v[i][j] == 'B' ? 1 : -1);
    if (cnt) return false;
    for (int j=0; j<n; j++) cnt += (v[j][i] == 'B' ? 1 : -1);
    if (cnt) return false;
    for (int j=2; j<n; j++) if (v[i][j] == v[i][j-1] && v[i][j] == v[i][j-2]) return false;
    for (int j=2; j<n; j++) if (v[j][i] == v[j-1][i] && v[j][i] == v[j-2][i]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
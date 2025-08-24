#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (v[i][j] != 'o') continue;
    if (0 < i && i < r-1 && v[i-1][j] == 'v' && v[i+1][j] == '^') ans++;
    if (0 < j && j < c-1 && v[i][j-1] == '>' && v[i][j+1] == '<') ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
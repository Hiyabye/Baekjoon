#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  vector<int> ans(5, 0);
  for (int i=1; i<r; i++) for (int j=1; j<c; j++) {
    if (v[i][j] == '#' || v[i][j-1] == '#' || v[i-1][j] == '#' || v[i-1][j-1] == '#') continue;
    ans[(v[i][j] == 'X') + (v[i-1][j] == 'X') + (v[i][j-1] == 'X') + (v[i-1][j-1] == 'X')]++;
  }

  for (int i=0; i<5; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
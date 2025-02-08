#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<vector<char>> &v, int x, int y) {
  for (int i=0; i<8; i++) {
    if (v[x][i] == 'R' || v[i][y] == 'R') return false;
  }
  return true;
}

void solve(void) {
  vector<vector<char>> v(8, vector<char>(8));
  for (int i=0; i<8; i++) for (int j=0; j<8; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<8; i++) for (int j=0; j<8; j++) {
    if (check(v, i, j)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
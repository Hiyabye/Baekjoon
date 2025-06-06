#include <iostream>
#include <vector>
using namespace std;

inline bool check(int r, int c, vector<vector<char>> &v) {
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (v[i][j] != 'S') continue;
    if (i > 0 && v[i-1][j] == 'W') return true;
    if (i < r-1 && v[i+1][j] == 'W') return true;
    if (j > 0 && v[i][j-1] == 'W') return true;
    if (j < c-1 && v[i][j+1] == 'W') return true;
  }
  return false;
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];
  if (check(r, c, v)) { cout << 0; return; }

  cout << "1\n";
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      cout << (v[i][j] == '.' ? 'D' : v[i][j]);
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
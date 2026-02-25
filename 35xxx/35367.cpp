#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  for (int i=0; i<c; i++) for (int j=0; j<r; j++) {
    if (v[j][i] != '.') {
      cout << v[j][i];
      break;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
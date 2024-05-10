#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<bool>> v(2*r, vector<bool>(2*c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    char ch; cin >> ch;
    v[i][j] = v[i][2*c-j-1] = v[2*r-i-1][j] = v[2*r-i-1][2*c-j-1] = (ch == '#');
  }
  int a, b; cin >> a >> b; a--; b--;
  v[a][b] = !v[a][b];

  for (int i=0; i<2*r; i++) {
    for (int j=0; j<2*c; j++) {
      cout << (v[i][j] ? '#' : '.');
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
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<vector<char>> v(8, vector<char>(8));
  for (int i=0; i<8; i++) for (int j=0; j<8; j++) cin >> v[i][j];
  int n; cin >> n;

  while (n--) {
    string s; cin >> s;
    int r1 = '8' - s[1], r2 = '8' - s[3];
    int c1 = s[0] - 'a', c2 = s[2] - 'a';
    cout << v[r1][c1];
    v[r2][c2] = v[r1][c1];
    v[r1][c1] = '.';
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}

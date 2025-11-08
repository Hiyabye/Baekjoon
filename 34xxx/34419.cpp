#include <iostream>
#include <vector>
using namespace std;

char solve(void) {
  vector<vector<char>> v(3, vector<char>(3));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  for (int i=0; i<3; i++) {
    if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != 'E') return v[i][0];
    if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != 'E') return v[0][i];
  }
  if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != 'E') return v[0][0];
  if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != 'E') return v[0][2];

  return 'N';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
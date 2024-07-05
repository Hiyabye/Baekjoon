#include <iostream>
#include <vector>
using namespace std;

bool win(const vector<vector<char>> &v) {
  for (int i=0; i<3; i++) {
    if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '-') return true;
    if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '-') return true;
  }
  if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '-') return true;
  if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '-') return true;
  return false;
}

void solve(int idx) {
  vector<vector<char>> v(3, vector<char>(3));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) cin >> v[i][j];
  char c; cin >> c;

  int y = -1, x = -1;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      if (v[i][j] != '-') continue;
      v[i][j] = c;
      if (win(v)) y = i, x = j;
      v[i][j] = '-';
    }
  }
  v[y][x] = c;

  cout << "Case " << idx << ":\n";
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
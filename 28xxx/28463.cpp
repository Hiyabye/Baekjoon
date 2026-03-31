#include <iostream>
#include <vector>
using namespace std;

inline vector<vector<char>> rotate(const vector<vector<char>> &v) {
  vector<vector<char>> ret(2, vector<char>(2));
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) ret[i][j] = v[1-j][i];
  return ret;
}

void solve(void) {
  char c; cin >> c;
  vector<vector<char>> v(2, vector<char>(2));
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) cin >> v[i][j];

  if (c == 'E') v = rotate(v);
  if (c == 'N') v = rotate(rotate(v));
  if (c == 'W') v = rotate(rotate(rotate(v)));

  if (v[0][0] == '.' && v[0][1] == 'O' && v[1][0] == 'P' && v[1][1] == '.') cout << 'T';
  else if (v[0][0] == 'I' && v[0][1] == '.' && v[1][0] == '.' && v[1][1] == 'P') cout << 'F';
  else if (v[0][0] == 'O' && v[0][1] == '.' && v[1][0] == '.' && v[1][1] == 'P') cout << "Lz";
  else cout << '?';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
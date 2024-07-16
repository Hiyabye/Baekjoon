#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline vector<vector<vector<char>>> init(void) {
  vector<vector<vector<char>>> v(6, vector<vector<char>>(3, vector<char>(3)));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) v[0][i][j] = 'w';  // up
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) v[1][i][j] = 'y';  // down
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) v[2][i][j] = 'r';  // front
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) v[3][i][j] = 'o';  // back
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) v[4][i][j] = 'g';  // left
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) v[5][i][j] = 'b';  // right
  return v;
}

inline void rotate(vector<vector<vector<char>>> &v, int x) {
  vector<vector<char>> tmp(3, vector<char>(3));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) tmp[i][j] = v[x][2-j][i];
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) v[x][i][j] = tmp[i][j];
}

inline void up(vector<vector<vector<char>>> &v) {
  vector<char> tmp(3); rotate(v, 0);
  for (int i=0; i<3; i++) tmp[i] = v[4][0][i];
  for (int i=0; i<3; i++) v[4][0][i] = v[2][0][i];
  for (int i=0; i<3; i++) v[2][0][i] = v[5][0][i];
  for (int i=0; i<3; i++) v[5][0][i] = v[3][0][i];
  for (int i=0; i<3; i++) v[3][0][i] = tmp[i];
}

inline void down(vector<vector<vector<char>>> &v) {
  vector<char> tmp(3); rotate(v, 1);
  for (int i=0; i<3; i++) tmp[i] = v[3][2][i];
  for (int i=0; i<3; i++) v[3][2][i] = v[5][2][i];
  for (int i=0; i<3; i++) v[5][2][i] = v[2][2][i];
  for (int i=0; i<3; i++) v[2][2][i] = v[4][2][i];
  for (int i=0; i<3; i++) v[4][2][i] = tmp[i];
}

inline void front(vector<vector<vector<char>>> &v) {
  vector<char> tmp(3); rotate(v, 2);
  for (int i=0; i<3; i++) tmp[i] = v[4][i][2];
  for (int i=0; i<3; i++) v[4][i][2] = v[1][0][i];
  for (int i=0; i<3; i++) v[1][0][i] = v[5][2-i][0];
  for (int i=0; i<3; i++) v[5][2-i][0] = v[0][2][2-i];
  for (int i=0; i<3; i++) v[0][2][2-i] = tmp[i];
}

inline void back(vector<vector<vector<char>>> &v) {
  vector<char> tmp(3); rotate(v, 3);
  for (int i=0; i<3; i++) tmp[i] = v[4][i][0];
  for (int i=0; i<3; i++) v[4][i][0] = v[0][0][2-i];
  for (int i=0; i<3; i++) v[0][0][2-i] = v[5][2-i][2];
  for (int i=0; i<3; i++) v[5][2-i][2] = v[1][2][i];
  for (int i=0; i<3; i++) v[1][2][i] = tmp[i];
}

inline void left(vector<vector<vector<char>>> &v) {
  vector<char> tmp(3); rotate(v, 4);
  for (int i=0; i<3; i++) tmp[i] = v[1][2-i][0];
  for (int i=0; i<3; i++) v[1][2-i][0] = v[2][2-i][0];
  for (int i=0; i<3; i++) v[2][2-i][0] = v[0][2-i][0];
  for (int i=0; i<3; i++) v[0][2-i][0] = v[3][i][2];
  for (int i=0; i<3; i++) v[3][i][2] = tmp[i];
}

inline void right(vector<vector<vector<char>>> &v) {
  vector<char> tmp(3); rotate(v, 5);
  for (int i=0; i<3; i++) tmp[i] = v[0][2-i][2];
  for (int i=0; i<3; i++) v[0][2-i][2] = v[2][2-i][2];
  for (int i=0; i<3; i++) v[2][2-i][2] = v[1][2-i][2];
  for (int i=0; i<3; i++) v[1][2-i][2] = v[3][i][0];
  for (int i=0; i<3; i++) v[3][i][0] = tmp[i];
}

void solve(void) {
  vector<vector<vector<char>>> v = init();

  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    switch (s[0]) {
      case 'U': up(v); if (s[1] == '-') { up(v); up(v); } break;
      case 'D': down(v); if (s[1] == '-') { down(v); down(v); } break;
      case 'F': front(v); if (s[1] == '-') { front(v); front(v); } break;
      case 'B': back(v); if (s[1] == '-') { back(v); back(v); } break;
      case 'L': left(v); if (s[1] == '-') { left(v); left(v); } break;
      case 'R': right(v); if (s[1] == '-') { right(v); right(v); } break;
    }
  }

  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      cout << v[0][i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
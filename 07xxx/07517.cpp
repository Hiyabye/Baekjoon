#include <iostream>
#include <vector>
using namespace std;

inline int c2i(char c) { return c - '0'; }
inline char i2c(int i) { return i + '0'; }

inline bool go(const vector<vector<char>> &v) {
  for (int i=0; i<9; i++) {
    for (int j=0; j<9; j++) {
      if (v[i][j] == '0') return true;
    }
  }
  return false;
}

inline void row(vector<vector<char>> &v, int idx) {
  vector<bool> a(10, false); int x = -1;
  for (int i=0; i<9; i++) {
    if (a[c2i(v[idx][i])]) return;
    a[c2i(v[idx][i])] = true;
    if (v[idx][i] == '0') x = i;
  }

  for (int i=1; i<=9; i++) {
    if (a[i]) continue;
    v[idx][x] = i2c(i);
    return;
  }
}

inline void col(vector<vector<char>> &v, int idx) {
  vector<bool> a(10, false); int y = -1;
  for (int i=0; i<9; i++) {
    if (a[c2i(v[i][idx])]) return;
    a[c2i(v[i][idx])] = true;
    if (v[i][idx] == '0') y = i;
  }

  for (int i=1; i<=9; i++) {
    if (a[i]) continue;
    v[y][idx] = i2c(i);
    return;
  }
}

inline void sqr(vector<vector<char>> &v, int y, int x) {
  vector<bool> a(10, false); int xx = -1, yy = -1;
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    if (a[c2i(v[3*y+i][3*x+j])]) return;
    a[c2i(v[3*y+i][3*x+j])] = true;
    if (v[3*y+i][3*x+j] == '0') yy = 3*y+i, xx = 3*x+j;
  }

  for (int i=1; i<=9; i++) {
    if (a[i]) continue;
    v[yy][xx] = i2c(i);
    return;
  }
}

void solve(int idx) {
  vector<vector<char>> v(9, vector<char>(9));
  for (int i=0; i<9; i++) for (int j=0; j<9; j++) cin >> v[i][j];

  while (go(v)) {
    for (int i=0; i<9; i++) row(v, i);
    for (int i=0; i<9; i++) col(v, i);
    for (int i=0; i<3; i++) for (int j=0; j<3; j++) sqr(v, i, j);
  }

  cout << "Scenario #" << idx << ":\n";
  for (int i=0; i<9; i++) {
    for (int j=0; j<9; j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
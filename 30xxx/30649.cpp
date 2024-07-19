#include <iostream>
#include <vector>
using namespace std;

inline int c2i(char c) { return c - '0'; }

bool solve(void) {
  vector<vector<char>> a(13, vector<char>(13));
  for (int i=0; i<13; i++) for (int j=0; j<13; j++) cin >> a[i][j];

  vector<vector<int>> b(9, vector<int>(9, 0));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    for (int k=0; k<3; k++) for (int l=0; l<3; l++) {
      if (a[4*i+j+1][4*k+l+1] == '.') continue;
      b[3*i+j][3*k+l] = c2i(a[4*i+j+1][4*k+l+1]);
    }
  }

  for (int i=0; i<9; i++) {
    vector<bool> c(10, false), d(10, false);
    for (int j=0; j<9; j++) {
      if (b[i][j] == 0) continue;
      if (c[b[i][j]]) return false;
      c[b[i][j]] = true;
    }
    for (int j=0; j<9; j++) {
      if (b[j][i] == 0) continue;
      if (d[b[j][i]]) return false;
      d[b[j][i]] = true;
    }
  }

  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    vector<bool> e(10, false);
    for (int k=0; k<3; k++) for (int l=0; l<3; l++) {
      if (b[3*i+k][3*j+l] == 0) continue;
      if (e[b[3*i+k][3*j+l]]) return false;
      e[b[3*i+k][3*j+l]] = true;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "OK" : "GRESKA");
  return 0;
}
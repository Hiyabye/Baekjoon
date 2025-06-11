#include <iostream>
#include <vector>
using namespace std;

inline bool check1(const vector<vector<char>> &v) {
  for (int i=0; i<10; i++) for (int j=0; j<6; j++) {
    int x = (v[i][j] == 'X') + (v[i][j+1] == 'X') + (v[i][j+2] == 'X') + (v[i][j+3] == 'X') + (v[i][j+4] == 'X');
    int d = (v[i][j] == '.') + (v[i][j+1] == '.') + (v[i][j+2] == '.') + (v[i][j+3] == '.') + (v[i][j+4] == '.');
    if (x == 4 && d == 1) return true;
  }
  return false;
}

inline bool check2(const vector<vector<char>> &v) {
  for (int i=0; i<6; i++) for (int j=0; j<10; j++) {
    int x = (v[i][j] == 'X') + (v[i+1][j] == 'X') + (v[i+2][j] == 'X') + (v[i+3][j] == 'X') + (v[i+4][j] == 'X');
    int d = (v[i][j] == '.') + (v[i+1][j] == '.') + (v[i+2][j] == '.') + (v[i+3][j] == '.') + (v[i+4][j] == '.');
    if (x == 4 && d == 1) return true;
  }
  return false;
}

inline bool check3(const vector<vector<char>> &v) {
  for (int i=0; i<6; i++) for (int j=0; j<6; j++) {
    int x = (v[i][j] == 'X') + (v[i+1][j+1] == 'X') + (v[i+2][j+2] == 'X') + (v[i+3][j+3] == 'X') + (v[i+4][j+4] == 'X');
    int d = (v[i][j] == '.') + (v[i+1][j+1] == '.') + (v[i+2][j+2] == '.') + (v[i+3][j+3] == '.') + (v[i+4][j+4] == '.');
    if (x == 4 && d == 1) return true;
  }
  return false;
}

inline bool check4(const vector<vector<char>> &v) {
  for (int i=4; i<10; i++) for (int j=0; j<6; j++) {
    int x = (v[i][j] == 'X') + (v[i-1][j+1] == 'X') + (v[i-2][j+2] == 'X') + (v[i-3][j+3] == 'X') + (v[i-4][j+4] == 'X');
    int d = (v[i][j] == '.') + (v[i-1][j+1] == '.') + (v[i-2][j+2] == '.') + (v[i-3][j+3] == '.') + (v[i-4][j+4] == '.');
    if (x == 4 && d == 1) return true;
  }
  return false;
}

bool solve(void) {
  vector<vector<char>> v(10, vector<char>(10));
  for (int i=0; i<10; i++) for (int j=0; j<10; j++) cin >> v[i][j];

  return check1(v) || check2(v) || check3(v) || check4(v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
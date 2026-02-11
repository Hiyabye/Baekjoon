#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<bool>> db = {
  {1, 1, 1, 0, 1, 1, 1},
  {0, 0, 1, 0, 0, 1, 0},
  {1, 0, 1, 1, 1, 0, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {0, 1, 1, 1, 0, 1, 0},
  {1, 1, 0, 1, 0, 1, 1},
  {1, 1, 0, 1, 1, 1, 1},
  {1, 0, 1, 0, 0, 1, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 0}
};

inline bool check(vector<char> &v, int n) {
  for (int i=0; i<7; i++) {
    if (v[i] == '-') continue;
    if (v[i] == '1') {
      if (!db[n][i]) return false;
    } else if (v[i] == '0') {
      if (db[n][i]) return false;
    }
  }
  return true;
}

void solve(void) {
  vector<vector<char>> v(6, vector<char>(7));
  for (int i=0; i<6; i++) for (int j=0; j<7; j++) cin >> v[i][j];

  for (int i=0; i<86400; i++) {
    int h = i / 3600, m = (i % 3600) / 60, s = i % 60;
    if (!check(v[0], h/10) || !check(v[1], h%10) || !check(v[2], m/10) || !check(v[3], m%10) || !check(v[4], s/10) || !check(v[5], s%10)) continue;
    cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

inline bool row(const vector<vector<int>> &v, int idx) {
  vector<bool> chk(10, false);
  for (int i=0; i<9; i++) {
    if (chk[v[idx][i]]) return false;
    chk[v[idx][i]] = true;
  }
  return true;
}

inline bool col(const vector<vector<int>> &v, int idx) {
  vector<bool> chk(10, false);
  for (int i=0; i<9; i++) {
    if (chk[v[i][idx]]) return false;
    chk[v[i][idx]] = true;
  }
  return true;
}

inline bool sqr(const vector<vector<int>> &v, int idx) {
  vector<bool> chk(10, false);
  for (int i=0; i<9; i++) {
    if (chk[v[(idx/3)*3+i/3][(idx%3)*3+i%3]]) return false;
    chk[v[(idx/3)*3+i/3][(idx%3)*3+i%3]] = true;
  }
  return true;
}

bool solve(void) {
  vector<vector<int>> v(9, vector<int>(9));
  for (int i=0; i<9; i++) for (int j=0; j<9; j++) cin >> v[i][j];

  for (int i=0; i<9; i++) if (!row(v, i) || !col(v, i) || !sqr(v, i)) return false;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) cout << "Case " << i << ": " << (solve() ? "" : "IN") << "CORRECT\n";
  return 0;
}
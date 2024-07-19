#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<vector<int>> v;
vector<pair<int, int>> zero;

inline bool check(void) {
  for (int i=0; i<3; i++) {
    if (v[i][0] == v[i][1] || v[i][1] == v[i][2] || v[i][2] == v[i][0]) return false;
    if (v[0][i] == v[1][i] || v[1][i] == v[2][i] || v[2][i] == v[0][i]) return false;
  }
  return true;
}

int backtrack(int idx) {
  if (idx == zero.size()) return check();

  int ret = 0;
  for (int i=1; i<=9; i++) {
    v[zero[idx].first][zero[idx].second] = i;
    ret += backtrack(idx+1);
  }
  return ret;
}

void solve(void) {
  v.resize(3, vector<int>(3));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      if (v[i][j] == 0) zero.push_back({i, j});
    }
  }
  cout << backtrack(0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
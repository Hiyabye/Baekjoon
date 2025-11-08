#include <iostream>
#include <vector>
using namespace std;

inline bool row(int n, const vector<vector<char>> &v, int r) {
  for (int i=0; i<n; i++) {
    if (v[r][i] == 'W') return false;
  }
  return true;
}

inline bool col(int n, const vector<vector<char>> &v, int c) {
  for (int i=0; i<n; i++) {
    if (v[i][c] == 'W') return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  vector<int> x, y;
  for (int i=0; i<n; i++) {
    if (row(n, v, i)) x.push_back(i);
    if (col(n, v, i)) y.push_back(i);
  }
  for (int i=0; i<x.size(); i++) {
    v[x[i]][y[i]] = 'W';
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) cout << v[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
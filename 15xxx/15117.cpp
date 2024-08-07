#include <iostream>
#include <vector>
using namespace std;

inline bool latin(int n, const vector<vector<int>> &v) {
  for (int i=0; i<n; i++) {
    vector<bool> row(n, false), col(n, false);
    for (int j=0; j<n; j++) {
      if (row[v[i][j]]) return false;
      row[v[i][j]] = true;
      if (col[v[j][i]]) return false;
      col[v[j][i]] = true;
    }
  }
  return true;
}

inline bool reduced(int n, const vector<vector<int>> &v) {
  for (int i=1; i<n; i++) {
    if (v[0][i-1] > v[0][i]) return false;
    if (v[i-1][0] > v[i][0]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    char c; cin >> c;
    v[i][j] = (c >= 'A') ? c - 'A' + 10 : c - '0';
  }

  cout << (latin(n, v) ? (reduced(n, v) ? "Reduced" : "Not Reduced") : "No");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
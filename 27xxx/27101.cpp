#include <iostream>
#include <vector>
using namespace std;

inline bool four(int n, const vector<vector<int>> &v) {
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) for (int k=0; k<n; k++) {
    if (v[i][j] + v[j][k] < v[i][k]) return false;
  }
  return true;
}

inline bool three(int n, const vector<vector<int>> &v) {
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j] != v[j][i]) return false;
  }
  return true;
}

inline bool two(int n, const vector<vector<int>> &v) {
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (i != j && v[i][j] <= 0) return false;
  }
  return true;
}

inline bool one(int n, const vector<vector<int>> &v) {
  for (int i=0; i<n; i++) {
    if (v[i][i] != 0) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  if (!one(n, v)) cout << 1;
  else if (!two(n, v)) cout << 2;
  else if (!three(n, v)) cout << 3;
  else if (!four(n, v)) cout << 4;
  else cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
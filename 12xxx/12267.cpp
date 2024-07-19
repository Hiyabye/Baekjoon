#include <iostream>
#include <vector>
using namespace std;

inline bool row(int n, const vector<vector<int>> &v, int idx) {
  vector<bool> a(n*n+1, false);
  for (int i=0; i<n*n; i++) {
    if (v[idx][i] < 1 || v[idx][i] > n*n || a[v[idx][i]]) return false;
    a[v[idx][i]] = true;
  }
  return true;
}

inline bool col(int n, const vector<vector<int>> &v, int idx) {
  vector<bool> a(n*n+1, false);
  for (int i=0; i<n*n; i++) {
    if (v[i][idx] < 1 || v[i][idx] > n*n || a[v[i][idx]]) return false;
    a[v[i][idx]] = true;
  }
  return true;
}

inline bool square(int n, const vector<vector<int>> &v) {
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    vector<bool> a(n*n+1, false);
    for (int k=0; k<n; k++) for (int l=0; l<n; l++) {
      if (v[n*i+k][n*j+l] < 1 || v[n*i+k][n*j+l] > n*n || a[v[n*i+k][n*j+l]]) return false;
      a[v[n*i+k][n*j+l]] = true;
    }
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n*n, vector<int>(n*n));
  for (int i=0; i<n*n; i++) for (int j=0; j<n*n; j++) cin >> v[i][j];

  for (int i=0; i<n*n; i++) if (!row(n, v, i) || !col(n, v, i)) return false;
  return square(n, v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) cout << "Case #" << i << ": " << (solve() ? "Yes" : "No") << "\n";
  return 0;
}
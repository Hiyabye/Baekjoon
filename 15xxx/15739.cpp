#include <iostream>
#include <set>
#include <vector>
using namespace std;

inline int row(int n, const vector<vector<int>> &v, int r) {
  int sum = 0;
  for (int i=0; i<n; i++) sum += v[r][i];
  return sum;
}

inline int col(int n, const vector<vector<int>> &v, int c) {
  int sum = 0;
  for (int i=0; i<n; i++) sum += v[i][c];
  return sum;
}

bool solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];
  
  set<int> s;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (s.find(v[i][j]) != s.end()) return false;
    s.insert(v[i][j]);
  }

  int d1 = 0, d2 = 0;
  for (int i=0; i<n; i++) {
    if (row(n, v, i) != n*(n*n+1)/2) return false;
    if (col(n, v, i) != n*(n*n+1)/2) return false;
    d1 += v[i][i]; d2 += v[i][n-i-1];
  }
  return d1 == n*(n*n+1)/2 && d2 == n*(n*n+1)/2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "TRUE" : "FALSE");
  return 0;
}
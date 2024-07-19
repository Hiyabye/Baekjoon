#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n*n, vector<int>(n*n));
  for (int i=0; i<n*n; i++) for (int j=0; j<n*n; j++) cin >> v[i][j];

  for (int i=0; i<n*n; i++) {
    vector<bool> a(n*n+1, false), b(n*n+1, false);
    for (int j=0; j<n*n; j++) {
      if (v[i][j] == 0) continue;
      if (a[v[i][j]]) return false;
      a[v[i][j]] = true;
    }
    for (int j=0; j<n*n; j++) {
      if (v[j][i] == 0) continue;
      if (b[v[j][i]]) return false;
      b[v[j][i]] = true;
    }
  }

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    vector<bool> c(n*n+1, false);
    for (int k=0; k<n; k++) for (int l=0; l<n; l++) {
      if (v[i*n+k][j*n+l] == 0) continue;
      if (c[v[i*n+k][j*n+l]]) return false;
      c[v[i*n+k][j*n+l]] = true;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "CORRECT" : "INCORRECT");
  return 0;
}
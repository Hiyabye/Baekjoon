#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j] == 0) return true;
    if (i+1 < n && v[i][j] == v[i+1][j]) return true;
    if (j+1 < n && v[i][j] == v[i][j+1]) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}
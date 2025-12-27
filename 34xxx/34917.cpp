#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<char>> v(n, vector<char>(n, '.'));
  for (int i=0; i<n; i++) v[i][0] = v[i][n-1] = '#';
  for (int i=0; i<=n/2; i++) v[i][i] = v[i][n-1-i] = '#';

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) cout << v[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
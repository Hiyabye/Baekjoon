#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    int d = 0;
    for (int j=0; j<n; j++) {
      d += (v[i][j] == 'B') - (v[i][j] == 'W');
    }
    if (d) return false;
    for (int j=2; j<n; j++) {
      if (v[i][j] == v[i][j-1] && v[i][j] == v[i][j-2]) {
        return false;
      }
    }
  }

  for (int j=0; j<n; j++) {
    int d = 0;
    for (int i=0; i<n; i++) {
      d += (v[i][j] == 'B') - (v[i][j] == 'W');
    }
    if (d) return false;
    for (int i=2; i<n; i++) {
      if (v[i][j] == v[i-1][j] && v[i][j] == v[i-2][j]) {
        return false;
      }
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
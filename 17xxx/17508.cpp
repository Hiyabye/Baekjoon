#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  if ((n & 1) && (m & 1)) {
    if (v[n/2][m/2] != '8') return -1;
  }

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (v[i][j] == '6') {
      if (v[n-i-1][m-j-1] == '9') continue;
      else if (v[n-i-1][m-j-1] == '6') ans++;
      else return -1;
    } else if (v[i][j] == '7') {
      if (v[n-i-1][m-j-1] == '7') ans++;
      else return -1;
    } else if (v[i][j] == '8') {
      if (v[n-i-1][m-j-1] == '8') continue;
      else return -1;
    } else { // v[i][j] == '9'
      if (v[n-i-1][m-j-1] == '6') continue;
      else if (v[n-i-1][m-j-1] == '9') ans++;
      else return -1;
    }
  }
  return ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
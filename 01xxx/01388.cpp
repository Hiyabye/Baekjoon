#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> a(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (a[i][j] == '.') continue;
    ans++;
    if (a[i][j] == '-') {
      for (int k=j; k<m; k++) {
        if (a[i][k] != '-') break;
        a[i][k] = '.';
      }
    } else if (a[i][j] == '|') {
      for (int k=i; k<n; k++) {
        if (a[k][j] != '|') break;
        a[k][j] = '.';
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
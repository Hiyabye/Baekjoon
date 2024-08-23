#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  if (k > n*n-n || (n == 2 && k == 2)) {
    cout << "NO";
    return;
  }

  vector<vector<char>> ans(n, vector<char>(n, '#'));
  ans[0][0] = ans[n-1][n-1] = '.';
  for (int i=1; i<n-1; i++) {
    ans[i][n-i-1] = '.';
  }

  int cur = n*n-n;
  for (int i=0; i<n && cur>k; i++) for (int j=0; j<n && cur>k; j++) {
    if (ans[i][j] == '.') continue;
    ans[i][j] = '.';
    cur--;
  }

  cout << "YES\n";
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << ans[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
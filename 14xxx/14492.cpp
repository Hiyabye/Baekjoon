#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int> > a(n, vector<int>(n)), b(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> b[i][j];

  vector<vector<int> > c(n, vector<int>(n, 0));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<n; k++) {
        c[i][j] |= a[i][k] & b[k][j];
      }
    }
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (c[i][j]) ans++;
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
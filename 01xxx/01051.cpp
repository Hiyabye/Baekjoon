#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > v(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    for (int j=0; j<m; j++) {
      v[i][j] = s[j] - '0';
    }
  }

  int ans = 1;
  for (int i=2; i<=min(n, m); i++) {
    for (int j=0; j<n-i+1; j++) {
      for (int k=0; k<m-i+1; k++) {
        if (v[j][k] == v[j+i-1][k] && v[j][k] == v[j][k+i-1] && v[j][k] == v[j+i-1][k+i-1]) {
          ans = max(ans, i*i);
        }
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
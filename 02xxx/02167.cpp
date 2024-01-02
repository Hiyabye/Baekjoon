#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;

  vector<vector<long long> > v(n, vector<long long>(m));
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> v[i][j];
    }
  }
  for (int i=0; i<n; i++) {
    for (int j=1; j<m; j++) {
      v[i][j] += v[i][j-1];
    }
  }
  for (int i=1; i<n; i++) {
    for (int j=0; j<m; j++) {
      v[i][j] += v[i-1][j];
    }
  }

  int k, a, b, c, d;
  cin >> k;
  for (int i=0; i<k; i++) {
    cin >> a >> b >> c >> d;
    a--; b--; c--; d--;
    int ans = v[c][d];
    if (a > 0) ans -= v[a-1][d];
    if (b > 0) ans -= v[c][b-1];
    if (a > 0 && b > 0) ans += v[a-1][b-1];
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
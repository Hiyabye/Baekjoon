#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, q; cin >> n >> m >> q;
  vector<vector<int>> p(m), w(m+1);
  vector<int> b(m+1);
  for (int i=0; i<m; i++) {
    int c; cin >> c;
    p[i].resize(c); w[i].resize(c);
    for (int j=0; j<c; j++) cin >> p[i][j], p[i][j]--;
    for (int j=0; j<c; j++) cin >> w[i][j];
    cin >> b[i];
  }
  w[m].resize(m);
  for (int i=0; i<m; i++) cin >> w[m][i];
  cin >> b[m];

  vector<long long> c(n, 0);
  long long d = b[m];
  for (int i=0; i<m; i++) {
    d += 1LL * b[i] * w[m][i];
    for (int j=0; j<p[i].size(); j++) {
      c[p[i][j]] += 1LL * w[i][j] * w[m][i];
    }
  }

  vector<int> a(n);
  while (q--) {
    for (int i=0; i<n; i++) cin >> a[i];
    long long ans = d;
    for (int i=0; i<n; i++) ans += c[i] * a[i];
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
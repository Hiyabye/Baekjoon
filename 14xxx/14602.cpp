#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int median(const vector<int> &v) {
  int n = v.size();
  return n & 1 ? v[n/2] : (v[n/2-1] + v[n/2]) / 2;
}

void solve(void) {
  int m, n, k, w; cin >> m >> n >> k >> w;
  vector<vector<int>> a(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  vector<vector<int>> b(m-w+1, vector<int>(n-w+1, 0));
  for (int i=0; i<=m-w; i++) for (int j=0; j<=n-w; j++) {
    vector<int> v;
    for (int x=0; x<w; x++) for (int y=0; y<w; y++) v.push_back(a[i+x][j+y]);
    sort(v.begin(), v.end());
    b[i][j] = median(v);
  }

  for (int i=0; i<=m-w; i++) {
    for (int j=0; j<=n-w; j++) {
      cout << b[i][j] << " ";
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
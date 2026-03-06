#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  vector<int> b(n);
  for (int i=0; i<n; i++) {
    b[i] = a[i][0];
    for (int j=1; j<m; j++) {
      b[i] = max(b[i], a[i][j]);
    }
  }

  for (int i=0; i<m; i++) {
    int cnt = 0;
    for (int j=0; j<n; j++) {
      if (b[j] != a[j][i]) cnt++;
    }
    cout << cnt << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
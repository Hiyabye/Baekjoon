#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void query(int n, const vector<vector<long long>> &a, const vector<long long> &b) {
  long long ans = 1e18;
  for (int i=0; i<n; i++) {
    if (b[0] <= a[i][0] && b[1] <= a[i][1] && b[2] <= a[i][2]) {
      ans = min(ans, a[i][0] * a[i][1] * a[i][2]);
    }
  }

  if (ans == 1e18) cout << "Item does not fit.";
  else cout << ans;
  cout << "\n";
}

void solve(void) {
  int n; cin >> n;
  vector<vector<long long>> a(n, vector<long long>(3));
  for (int i=0; i<n; i++) for (int j=0; j<3; j++) cin >> a[i][j];
  for (int i=0; i<n; i++) sort(a[i].begin(), a[i].end());

  int m; cin >> m;
  while (m--) {
    vector<long long> b(3);
    for (int i=0; i<3; i++) cin >> b[i];
    sort(b.begin(), b.end());
    query(n, a, b);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
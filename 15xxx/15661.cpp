#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int ans = 1e9;
  for (int mask=0; mask<(1<<n); mask++) {
    int sum = 0;
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
      if ((mask & (1 << i)) && (mask & (1 << j))) sum += v[i][j];
      if (!(mask & (1 << i)) && !(mask & (1 << j))) sum -= v[i][j];
    }
    ans = min(ans, abs(sum));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
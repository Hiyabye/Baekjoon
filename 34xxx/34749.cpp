#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(m, 0);
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    int g; cin >> g;
    v[j] = max(v[j], g);
  }

  int ans = 0;
  for (int j=0; j<m; j++) {
    ans += v[j];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
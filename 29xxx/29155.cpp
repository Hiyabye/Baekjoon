#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> p(5);
  for (int i=0; i<5; i++) cin >> p[i];
  vector<vector<int>> v(5);
  while (n--) {
    int k, t; cin >> k >> t; k--;
    v[k].push_back(t);
  }

  for (int i=0; i<5; i++) {
    sort(v[i].begin(), v[i].end());
  }

  int ans = 240;
  for (int i=0; i<5; i++) {
    ans += v[i][0];
    for (int j=1; j<p[i]; j++) {
      ans += 2 * v[i][j] - v[i][j-1];
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
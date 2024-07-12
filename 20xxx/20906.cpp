#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int t, s, n; cin >> t >> s >> n;
  vector<int> a(n+1); a[n] = t;
  for (int i=0; i<n; i++) cin >> a[i];

  pair<int, int> ans = {0, s};
  for (int i=0; i<n; i++) {
    int d = a[i+1] - a[i];
    ans = {max(ans.second - d, 0), min(ans.first + d, s)};
  }
  cout << ans.first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> t(n), l(m);
  for (int i=0; i<n; i++) cin >> t[i];
  for (int i=0; i<m; i++) cin >> l[i];
  sort(t.begin(), t.end());
  sort(l.begin(), l.end());

  int ans = 0;
  for (int i=0; i<m && ans<n; i++) {
    if (t[ans] <= l[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
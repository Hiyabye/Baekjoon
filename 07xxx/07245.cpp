#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<int> ans(n, 0), cur(n, 0);
  while (m--) {
    int t, v; cin >> t >> v;
    vector<int> z(n);
    for (int i=0; i<n; i++) cin >> z[i];

    int idx = -1;
    for (int i=0; i<n; i++) {
      if (cur[i] > t) continue;
      if (idx == -1 || z[i] < z[idx]) idx = i;
    }
    if (idx == -1) continue;

    cur[idx] = t + z[idx];
    ans[idx] += v;
  }

  for (int i=0; i<n; i++) cout << ans[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<pair<int, int>> ans(m);
  for (int i=0; i<m; i++) ans[i].first = n, ans[i].second = i+1;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    int x; cin >> x;
    ans[j].first -= x;
  }

  sort(ans.begin(), ans.end());
  for (int i=0; i<m; i++) {
    cout << ans[i].second << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
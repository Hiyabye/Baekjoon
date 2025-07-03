#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<pair<int, int>> d(n);
  for (int i=0; i<n; i++) cin >> d[i].first, d[i].second = i+1;
  sort(d.begin(), d.end());

  vector<int> ans(k);
  for (int i=0, cur=0; i<k; i++) {
    if (--d[cur].first) {
      ans[i] = 0; m--;
    } else {
      ans[i] = d[cur++].second;
    }
    if (m < 0) {
      cout << "-1";
      return;
    }
  }

  for (int i=0; i<k; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
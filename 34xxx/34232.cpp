#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  unordered_map<int, pair<int, int>> mp;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    cin >> a[i][j];
    mp[a[i][j]] = {i, j};
  }

  int ans = 1, x1 = mp[1].first, x2 = mp[1].first, y1 = mp[1].second, y2 = mp[1].second;
  for (int i=2; i<=n*n; i++) {
    x1 = min(x1, mp[i].first); x2 = max(x2, mp[i].first);
    y1 = min(y1, mp[i].second); y2 = max(y2, mp[i].second);
    if ((x2-x1+1)*(y2-y1+1) != i) continue;
    bool flag = true;
    for (int j=i+1; j<=(x2-x1+1)*(y2-y1+1); j++) {
      if (x1 <= mp[j].first && mp[j].first <= x2 && y1 <= mp[j].second && mp[j].second <= y2) continue;
      flag = false;
      break;
    }
    if (flag) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
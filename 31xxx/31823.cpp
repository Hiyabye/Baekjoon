#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<pair<int, string>> ans(n, {0, ""});
  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=0; j<m; j++) {
      char c; cin >> c;
      cnt = (c == '.') ? cnt+1 : 0;
      ans[i].first = max(ans[i].first, cnt);
    }
    cin >> ans[i].second;
  }

  vector<bool> diff(m+1, false);
  for (int i=0; i<n; i++) diff[ans[i].first] = true;
  cout << count(diff.begin(), diff.end(), true) << "\n";
  
  for (int i=0; i<n; i++) {
    cout << ans[i].first << " " << ans[i].second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
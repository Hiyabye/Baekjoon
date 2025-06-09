#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, string>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].second >> v[i].first;
  sort(v.begin(), v.end(), greater<pair<int, string>>());

  vector<vector<string>> ans(4, vector<string>(n/4));
  for (int i=0; i<n; i++) ans[i%4][i/4] = v[i].second;
  for (int i=0; i<4; i++) {
    sort(ans[i].begin(), ans[i].end());
    cout << i+1;
    for (int j=0; j<n/4; j++) cout << " " << ans[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
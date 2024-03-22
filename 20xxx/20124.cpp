#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<string, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

  pair<string, int> ans = v[0];
  for (int i=1; i<n; i++) {
    if (v[i].second > ans.second || (v[i].second == ans.second && v[i].first < ans.first)) {
      ans = v[i];
    }
  }
  cout << ans.first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
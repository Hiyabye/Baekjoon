#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> t(n);
  for (int i=0; i<n; i++) cin >> t[i].first, t[i].second = i;
  sort(t.begin(), t.end());

  vector<int> ans(n);
  for (int i=0; i<n; i++) {
    ans[t[i].second] = i+1;
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
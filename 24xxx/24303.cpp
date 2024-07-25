#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int solve(void) {
  vector<pair<int, int>> v(3);
  for (int i=0; i<3; i++) cin >> v[i].first;
  for (int i=0; i<3; i++) cin >> v[i].second;
  int l; cin >> l;
  sort(v.begin(), v.end(), greater<pair<int, int>>());

  int ans = 0;
  for (int i=0; i<3; i++) {
    int c = min((l+v[i].first-1)/v[i].first, v[i].second);
    l -= v[i].first * c;
    ans += c;
    if (l <= 0) return ans;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
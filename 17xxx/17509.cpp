#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  vector<pair<int, int>> v(11);
  for (int i=0; i<11; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());

  int ans = 0, cur = 0;
  for (int i=0; i<11; i++) {
    cur += v[i].first;
    ans += cur + v[i].second * 20;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
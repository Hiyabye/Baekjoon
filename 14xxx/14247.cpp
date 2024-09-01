#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].second;
  for (int i=0; i<n; i++) cin >> v[i].first;
  sort(v.begin(), v.end());

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += v[i].second + v[i].first * i;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
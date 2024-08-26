#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<pair<int, int>> a(n);
  for (int i=0; i<n; i++) cin >> a[i].first, a[i].second = i;
  sort(a.begin(), a.end(), greater<pair<int, int>>());

  vector<pair<int, int>> b(k);
  for (int i=0; i<k; i++) {
    b[i] = {a[i].second, a[i].first};
  }
  sort(b.begin(), b.end());

  int ans = 0;
  for (int i=0; i<k; i++) {
    ans += b[i].second - i;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
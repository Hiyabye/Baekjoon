#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> a(n);
  for (int i=0; i<n; i++) cin >> a[i].first, a[i].second = i;
  sort(a.begin(), a.end());

  int ans = 1;
  for (int i=0; i<n; i++) {
    ans = max(ans, a[i].second-i+1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
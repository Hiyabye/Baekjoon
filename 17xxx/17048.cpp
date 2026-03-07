#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  unordered_map<int, int> mp;
  for (int i=0; i<n; i++) {
    mp[b[i] - a[i]]++;
  }

  int ans = 0;
  for (auto& [_, cnt] : mp) {
    ans = max(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
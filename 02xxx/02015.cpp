#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long ans = 0, cur = 0;
  unordered_map<int, int> mp; mp[0] = 1;
  for (int i=0; i<n; i++) {
    cur += a[i];
    ans += mp[cur-k];
    mp[cur]++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  unordered_map<int, int> mp;
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) mp[a[i]]++;

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += n - mp[a[i]];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
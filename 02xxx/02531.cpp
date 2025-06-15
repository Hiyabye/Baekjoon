#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n, d, k, c; cin >> n >> d >> k >> c;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  map<int, int> mp; mp[c]++;
  for (int i=0; i<k; i++) mp[v[i]]++;

  int ans = mp.size();
  for (int i=1; i<n; i++) {
    if (mp[v[i-1]] == 1) mp.erase(v[i-1]);
    else mp[v[i-1]]--;
    mp[v[(i+k-1)%n]]++;
    ans = max(ans, (int)mp.size());
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
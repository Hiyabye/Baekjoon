#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  map<int, int> mp;
  for (int i=2; i*i<=n; i++) {
    while (!(n % i)) mp[i]++, n /= i;
  }
  if (n > 1) mp[n]++;

  int ans = 1;
  for (auto it=mp.begin(); it!=mp.end(); it++) {
    ans *= it->second + 1;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
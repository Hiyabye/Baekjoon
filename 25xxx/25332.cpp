#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];
  for (int i=0; i<n; i++) c[i] = a[i] - b[i];

  map<long long, long long> mp; mp[0] = 1;
  long long ans = mp[c[0]]++;
  for (int i=1; i<n; i++) {
    c[i] += c[i-1];
    ans += mp[c[i]]++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
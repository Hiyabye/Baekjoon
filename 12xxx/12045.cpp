#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n), c(n), d(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];
  for (int i=0; i<n; i++) cin >> c[i];
  for (int i=0; i<n; i++) cin >> d[i];

  map<int, long long> mp;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    mp[a[i] ^ b[j]]++;
  }

  long long ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    ans += mp[k ^ c[i] ^ d[j]];
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
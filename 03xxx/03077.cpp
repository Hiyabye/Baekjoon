#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  unordered_map<string, int> mp;
  for (int i=0; i<n; i++) {
    mp[a[i]] = i;
  }

  int ans = 0;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if (mp[b[i]] < mp[b[j]]) ans++;
    }
  }
  cout << ans << "/" << n*(n-1)/2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
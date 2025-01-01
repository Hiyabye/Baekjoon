#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, int> mp;

void precompute(int n) {
  vector<int> cnt(n+1, 0);
  for (int i=1; i*i<=n; i++) for (int j=i*i; j<=n; j+=i) cnt[j]++;
  for (int i=1; i<=n; i++) {
    if (mp.find(cnt[i]) == mp.end()) mp[cnt[i]] = i;
  }
}

void solve(void) {
  int n; cin >> n;

  if (mp.find(n) != mp.end()) cout << mp[n] << "\n";
  else cout << "Too big\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute(1000000);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
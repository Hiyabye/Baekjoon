#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string t; cin >> t;
  int n; cin >> n;
  vector<int> c(n);
  vector<string> w(n);
  for (int i=0; i<n; i++) cin >> c[i] >> w[i];

  int ans = 1e9;
  for (int mask=0; mask<(1<<n); mask++) {
    vector<int> cnt(26, 0);
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) {
        for (char ch : w[i]) cnt[ch - 'A']++;
      }
    }
    for (char ch : t) cnt[ch - 'A']--;
    if (*min_element(cnt.begin(), cnt.end()) < 0) continue;
    int cost = 0;
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) {
        cost += c[i];
      }
    }
    ans = min(ans, cost);
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  map<int, int> mp1;
  for (int i=0; i<n; i++) {
    mp1[t[i]]++;
  }

  map<int, vector<int>> mp2;
  for (int i=0, j=1; i<n; i++) {
    if (mp1[t[i]] != 6) continue;
    mp2[t[i]].push_back(j++);
  }

  int ans = -1, key = 1e9;
  for (const auto &[p, v] : mp2) {
    int cur = v[0] + v[1] + v[2] + v[3];
    if ((cur < key) || (cur == key && v[4] < mp2[ans][4])) ans = p, key = cur;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
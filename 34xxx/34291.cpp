#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;
  unordered_map<int, int> mp;
  while (n--) {
    int t, p; cin >> t >> p;
    if (mp.find(t) == mp.end()) mp[t] = p;
    else mp[t] = min(mp[t], p);
  }

  vector<int> v;
  for (auto &[_, p] : mp) {
    v.push_back(p);
  }
  sort(v.begin(), v.end());

  int ans = 0;
  for (int i=0; i<v.size(); i++) {
    if (v[i] > c) break;
    ans++; c -= v[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
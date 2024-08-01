#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  unordered_map<string, int> mp;
  while (n--) {
    string s; int p; cin >> s >> p;
    mp[s] = p;
  }

  int ans = 0;
  while (k-- && m--) {
    string t; cin >> t;
    ans += mp[t];
    mp.erase(t);
  }

  vector<int> v;
  for (auto &p : mp) v.push_back(p.second);
  sort(v.begin(), v.end());

  cout << ans + accumulate(v.begin(), v.begin() + m, 0) << " " << ans + accumulate(v.end() - m, v.end(), 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
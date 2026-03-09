#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<string, int> mp;

bool cmp(const string &s, const string &t) {
  if (mp[s] != mp[t]) return mp[s] > mp[t];
  return s < t;
}

void solve(void) {
  int n; cin >> n;
  for (int i=0; i<n*(n-1)/2; i++) {
    string s, t; int x, y; cin >> s >> t >> x >> y;
    if (mp.find(s) == mp.end()) mp[s] = 0;
    if (mp.find(t) == mp.end()) mp[t] = 0;
    if (x > y) mp[s] += 3;
    else if (x < y) mp[t] += 3;
    else mp[s]++, mp[t]++;
  }

  vector<string> ans;
  for (const auto &[s, _] : mp) ans.push_back(s);
  sort(ans.begin(), ans.end(), cmp);

  for (int i=0; i<5 && i<ans.size(); i++) {
    cout << ans[i] << " " << mp[ans[i]] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
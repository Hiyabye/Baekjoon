#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string s; int id; cin >> s >> id;
    if (mp.find(s) == mp.end()) mp[s] = id;
    else mp[s] = min(mp[s], id);
  }

  vector<int> ans;
  for (auto [_, id] : mp) ans.push_back(id);
  sort(ans.begin(), ans.end());

  for (int id : ans) cout << id << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
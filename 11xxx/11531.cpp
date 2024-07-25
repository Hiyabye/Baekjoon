#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

void solve(void) {
  int m; cin >> m;

  unordered_map<string, pair<int, int>> mp;
  while (m != -1) {
    string a, b; cin >> a >> b;
    if (mp.find(a) == mp.end()) mp[a] = {-1, 0};
    if (b == "right") mp[a].first = m;
    mp[a].second++;
    cin >> m;
  }

  pair<int, int> ans = {0, 0};
  for (auto [_, v] : mp) {
    if (v.first == -1) continue;
    ans.first++;
    ans.second += v.first + 20 * (v.second - 1);
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
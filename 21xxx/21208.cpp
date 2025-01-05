#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

bool cmp(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
  if (a.second.first != b.second.first) return a.second.first > b.second.first;
  return a.second.second > b.second.second;
}

void solve(void) {
  int n, k; cin >> n >> k; cin.ignore();

  unordered_map<string, pair<int, int>> mp;
  for (int i=0; i<3*n; i++) {
    string s; getline(cin, s);
    if (mp.find(s) == mp.end()) {
      mp[s] = make_pair(1, i);
    } else {
      mp[s] = make_pair(mp[s].first + 1, i);
    }
  }

  vector<pair<string, pair<int, int>>> ans;
  for (auto [s, p] : mp) {
    ans.push_back(make_pair(s, p));
  }
  sort(ans.begin(), ans.end(), cmp);

  for (int i=0; i<k && i<ans.size(); i++) {
    cout << ans[i].first << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
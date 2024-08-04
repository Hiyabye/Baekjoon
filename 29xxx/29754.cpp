#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

inline int calc(const string &s, const string &e) {
  return (stoi(e.substr(0, 2)) - stoi(s.substr(0, 2))) * 60 + (stoi(e.substr(3, 2)) - stoi(s.substr(3, 2)));
}

inline bool check(int m, const vector<pair<int, int>> &v) {
  unordered_map<int, pair<int, int>> mp;
  for (int i=0; i<v.size(); i++) {
    int w = (v[i].first - 1) / 7;
    mp[w].first++;
    mp[w].second += v[i].second;
  }

  for (int i=0; i<m/7; i++) {
    if (mp[i].first < 5) return false;
    if (mp[i].second < 3600) return false;
  }
  return true;
}

void solve(void) {
  int n, m; cin >> n >> m;
  unordered_map<string, vector<pair<int, int>>> mp;
  while (n--) {
    string a, c, d; int b; cin >> a >> b >> c >> d;
    mp[a].push_back({b, calc(c, d)});
  }

  set<string> ans;
  for (auto &[k, v] : mp) {
    if (check(m, v)) ans.insert(k);
  }
  if (ans.empty()) cout << -1;
  else for (const auto &s : ans) cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
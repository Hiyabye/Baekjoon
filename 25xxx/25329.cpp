#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

inline int calc(int t) {
  return 10 + (max(0, t - 100) + 49) / 50 * 3;
}

bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
  if (a.second != b.second) return a.second > b.second;
  return a.first < b.first;
}

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string a, b; cin >> a >> b;
    mp[b] += stoi(a.substr(0, 2)) * 60 + stoi(a.substr(3, 2));
  }

  vector<pair<string, int>> ans;
  for (auto &p : mp) {
    ans.push_back({p.first, calc(p.second)});
  }
  sort(ans.begin(), ans.end(), cmp);

  for (auto &p : ans) {
    cout << p.first << " " << p.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
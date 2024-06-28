#include <iostream>
#include <utility>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b) {
  if (a.second < b.second) return false;
  if (a.second > b.second) return true;
  if (a.first.size() < b.first.size()) return false;
  if (a.first.size() > b.first.size()) return true;
  return a.first < b.first;
}

void solve(void) {
  int n, m;
  cin >> n >> m;

  map<string, int> mp;
  string s;
  while (n--) {
    cin >> s;
    if (s.size() < m) continue;
    if (mp.find(s) == mp.end()) mp[s] = 1;
    else mp[s]++;
  }

  vector<pair<string, int> > ans;
  for (auto it : mp) {
    ans.push_back(make_pair(it.first, it.second));
  }
  sort(ans.begin(), ans.end(), cmp);

  for (auto it : ans) {
    cout << it.first << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
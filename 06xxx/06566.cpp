#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  map<string, vector<string>> mp; string s;
  while (cin >> s) {
    string t = s;
    sort(t.begin(), t.end());
    mp[t].push_back(s);
  }

  for (auto &p : mp) {
    sort(p.second.begin(), p.second.end());
  }

  map<pair<int, string>, set<string>> ans;
  for (auto &p : mp) {
    ans[{-p.second.size(), *p.second.begin()}] = set<string>(p.second.begin(), p.second.end());
  }

  int cnt = 0;
  for (auto &p : ans) {
    if (cnt++ == 5) break;
    cout << "Group of size " << -p.first.first << ": ";
    for (auto &s : p.second) {
      cout << s << " ";
    }
    cout << ".\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
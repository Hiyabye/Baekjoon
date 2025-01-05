#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<string, vector<string>> mp1;
  while (n--) {
    string s; int w; cin >> s >> w;
    while (w--) {
      string t; cin >> t;
      mp1[t].push_back(s);
    }
  }

  map<string, int> mp2; string s;
  while (cin >> s) {
    if (mp1.find(s) == mp1.end()) continue;
    for (const string &t : mp1[s]) mp2[t]++;
  }

  int mx = 0;
  for (const auto &p : mp2) mx = max(mx, p.second);
  for (const auto &p : mp2) {
    if (p.second == mx) cout << p.first << "\n";
  }
  if (mx) return;

  set<string> ans;
  for (const auto &p : mp1) for (const string &t : p.second) {
    ans.insert(t);
  }
  for (const string &t : ans) cout << t << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
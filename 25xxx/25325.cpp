#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
  if (a.second != b.second) return a.second > b.second;
  return a.first < b.first;
}

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  for (int i=0; i<n; i++) {
    string a; cin >> a;
    mp[a] = i;
  }
  cin.ignore();

  vector<pair<string, int>> ans(n);
  for (auto &p : mp) {
    ans[p.second] = {p.first, 0};
  }
  for (int i=0; i<n; i++) {
    string s; getline(cin, s);
    stringstream ss(s); string t;
    while (ss >> t) ans[mp[t]].second++;
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
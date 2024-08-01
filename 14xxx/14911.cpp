#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s); int x;
  vector<int> v;
  while (ss >> x) v.push_back(x);
  cin >> x;

  set<pair<int, int>> ans;
  for (int i=0; i<v.size()-1; i++) for (int j=i+1; j<v.size(); j++) {
    if (v[i] + v[j] != x) continue;
    if (v[i] > v[j]) swap(v[i], v[j]);
    ans.insert({v[i], v[j]});
  }

  for (auto p : ans) cout << p.first << " " << p.second << "\n";
  cout << ans.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
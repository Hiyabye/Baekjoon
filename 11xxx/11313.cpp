#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n; cin.ignore();
  vector<pair<string, string>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].second >> v[i].first;
  sort(v.begin(), v.end());

  map<pair<string, string>, int> mp;
  for (int i=0; i<n; i++) {
    mp[v[i]] = i;
  }

  int q; cin >> q;
  while (q--) {
    string s, t; cin >> s >> t;
    int idx = mp[{t, s}] / 3;
    for (int i=idx*3; i<idx*3+3; i++) {
      if (v[i] == make_pair(t, s)) continue;
      cout << v[i].second << " " << v[i].first << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
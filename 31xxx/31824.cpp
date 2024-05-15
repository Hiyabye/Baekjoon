#include <iostream>
#include <map>
#include <string>
using namespace std;

string query(map<string, string> &mp, const string &s) {
  string ans = "";
  for (int i=0; i<s.length(); i++) for (int j=0; j<s.length()-i; j++) {
    if (mp.find(s.substr(i, j+1)) == mp.end()) continue;
    ans += mp[s.substr(i, j+1)];
  }
  return (ans.empty() ? "-1" : ans);
}

void solve(void) {
  int n, m; cin >> n >> m;
  map<string, string> mp;
  while (n--) {
    string q, a; cin >> q >> a;
    mp[q] = a;
  }

  while (m--) {
    string s; cin >> s;
    cout << query(mp, s) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
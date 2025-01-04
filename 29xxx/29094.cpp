#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string s; cin >> s;
    mp[s] = 0;
  }
  int m; cin >> m;

  int a = 0, b = 0;
  while (m--) {
    string s, t; cin >> s >> t;
    int x = stoi(s.substr(0, s.find(':')));
    int y = stoi(s.substr(s.find(':') + 1));
    if (a != x) {
      mp[t] += x - a;
      a = x;
    }
    if (b != y) {
      mp[t] += y - b;
      b = y;
    }
  }

  string ans = "";
  int mx = 0;
  for (auto [k, v] : mp) {
    if (v > mx) {
      mx = v;
      ans = k;
    }
  }
  cout << ans << " " << mx;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
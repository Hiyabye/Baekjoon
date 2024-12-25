#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  map<string, int> mp;
  while (n--) {
    int s, t; cin >> s >> t;
    while (t--) {
      string str; cin >> str;
      mp[str]++;
    }
  }

  string ans; int cnt = 0;
  for (auto &p : mp) {
    if (p.second > cnt) {
      ans = p.first;
      cnt = p.second;
    } else if (p.second == cnt) {
      ans = "-1";
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int k; cin >> k;
  map<string, char> mp;
  while (k--) {
    char c; string s; cin >> c >> s;
    mp[s] = c;
  }
  string s; cin >> s;

  string cur = "";
  for (char c : s) {
    cur += c;
    if (mp.count(cur)) {
      cout << mp[cur];
      cur = "";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
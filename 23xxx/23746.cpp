#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<char, string> mp;
  while (n--) {
    string a; char b; cin >> a >> b;
    mp[b] = a;
  }
  string p; cin >> p;
  int s, e; cin >> s >> e;

  string ans = "";
  for (char c : p) ans += mp[c];
  cout << ans.substr(s-1, e-s+1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
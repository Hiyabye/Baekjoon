#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  bool ans = true;
  map<string, string> mp;
  for (int i=0; i<n; i++) {
    if (!mp[s[i]].empty()) ans = false;
    cin >> mp[s[i]];
    if (mp[s[i]] == s[i]) ans = false;
    if (!mp[mp[s[i]]].empty() && mp[mp[s[i]]] != s[i]) ans = false;
  }
  cout << (ans ? "good" : "bad");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
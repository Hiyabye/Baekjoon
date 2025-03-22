#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;

  unordered_map<string, string> mp;
  while (n--) {
    string a, b; cin >> a >> b;
    string c = a.substr(0, 1) + b.substr(0, 1);
    string d = a + " " + b;
    if (mp.find(c) == mp.end()) mp[c] = d;
    else mp[c] = "ambiguous";
  }

  while (q--) {
    string s; cin >> s;
    if (mp.find(s) == mp.end()) cout << "nobody";
    else cout << mp[s];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
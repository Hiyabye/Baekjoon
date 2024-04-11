#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int t; cin >> t;
  map<string, char> mp;
  while (t--) {
    char c; string s; cin >> c >> s;
    mp[s] = c;
  }

  string n; cin >> n;
  for (int i=0; i<n.length(); i+=4) {
    cout << (mp.find(n.substr(i, 4)) != mp.end() ? mp[n.substr(i, 4)] : '?');
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
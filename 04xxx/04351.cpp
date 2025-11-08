#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  unordered_map<string, int> mp;
  while (m--) {
    string s; int v; cin >> s >> v;
    mp[s] = v;
  }

  cin.ignore();
  while (n--) {
    int ans = 0;
    string s; getline(cin, s);
    while (s != ".") {
      stringstream ss(s); string t;
      while (ss >> t) ans += mp[t];
      getline(cin, s);
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
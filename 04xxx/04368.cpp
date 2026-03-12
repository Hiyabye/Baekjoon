#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  unordered_map<string, string> mp;
  while (s != "") {
    stringstream ss(s);
    string t, u; ss >> t >> u;
    mp[u] = t;
    getline(cin, s);
  }

  while (cin >> s) {
    cout << (mp.find(s) != mp.end() ? mp[s] : "eh") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
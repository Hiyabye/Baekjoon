#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  unordered_map<string, string> mp;
  string t; getline(cin, t);

  while (t != "what does the fox say?") {
    stringstream ss(t);
    string a, b, c; ss >> a >> b >> c;
    mp[c] = a;
    getline(cin, t);
  }

  stringstream ss(s);
  while (ss >> t) {
    if (mp.find(t) == mp.end()) cout << t << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}
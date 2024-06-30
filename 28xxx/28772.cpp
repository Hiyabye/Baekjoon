#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

bool valid(const string &s) {
  if (s.length() == 1 || s[0] != '#') return false;
  for (int i=1; i<s.length(); i++) {
    if (s[i] == '#') return false;
  }
  return true;
}

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s); string t;
  
  map<string, int> mp;
  while (ss >> t) {
    if (valid(t)) mp[t]++;
  }

  cout << mp.size() << "\n";
  for (auto [u, v] : mp) {
    cout << u << " " << v << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
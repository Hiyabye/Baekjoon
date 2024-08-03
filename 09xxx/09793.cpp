#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

inline int calc(const string &s) {
  int ret = 0;
  stringstream ss(s); string t;
  while (ss >> t) ret++;
  return ret;
}

void solve(void) {
  int n; cin >> n;
  cin.ignore();

  map<int, int> mp;
  while (n--) {
    string s; getline(cin, s);
    mp[calc(s)]++;
  }

  for (const auto &p : mp) {
    cout << p.first << " " << p.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
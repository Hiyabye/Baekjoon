#include <iostream>
#include <map>
#include <string>
using namespace std;

string solve(void) {
  int n; cin >> n;
  map<string, int> mp;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    mp[s]++;
  }

  for (auto &p : mp) {
    if (p.second * 2 > n) return p.first;
  }
  return "NONE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
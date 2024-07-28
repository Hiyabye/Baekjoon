#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);

  vector<string> v; string t;
  while (ss >> t) v.push_back(t);

  int ans = (v[0] == "u" || v[0] == "ur" || v[0].find("lol") != string::npos);
  for (int i=1; i<v.size(); i++) {
    if (v[i] == "u" || v[i] == "ur") ans++;
    if (v[i] == "of" && (v[i-1] == "would" || v[i-1] == "should")) ans++;
    if (v[i].find("lol") != string::npos) ans++;
  }
  cout << ans * 10 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}
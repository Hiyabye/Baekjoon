#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> mp1;
unordered_map<int, string> mp2;

void precompute(void) {
  mp1["{}"] = 0; mp2[0] = "{}";
  for (int i=1; i<=15; i++) {
    string s = "{{}";
    for (int j=1; j<i; j++) s += "," + mp2[j];
    s += "}";
    mp1[s] = i; mp2[i] = s;
  }
}

void solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  cout << mp2[mp1[s] + mp1[t]] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
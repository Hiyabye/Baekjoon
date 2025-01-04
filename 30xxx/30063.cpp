#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int idx = 0;
  string key = "RAKTAS";
  unordered_map<char, int> mp;
  for (int i=0; i<n; i++) {
    mp[s[i]]++;
    while (idx < 6 && mp[key[idx]] > 0) mp[key[idx]]--, idx++;
    if (idx == 6) {
      cout << i+1;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
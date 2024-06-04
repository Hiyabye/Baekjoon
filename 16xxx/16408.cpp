#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  map<char, int> mp;
  for (int i=0; i<5; i++) {
    string s; cin >> s;
    mp[s[0]]++;
  }

  int ans = 0;
  for (auto it=mp.begin(); it!=mp.end(); it++) {
    ans = max(ans, it->second);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
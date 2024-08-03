#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mp = {
  {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
  {'C', 100}, {'D', 500}, {'M', 1000}
};

void solve(void) {
  string s; cin >> s;

  int ans = 0, cur = 0;
  for (int i=s.length()-1; i>=0; i--) {
    ans += (mp[s[i]] < cur) ? -mp[s[i]] : mp[s[i]];
    cur = max(cur, mp[s[i]]);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}
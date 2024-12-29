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

  int ans = 0;
  for (int i=0; i<s.length(); i+=2) {
    ans += (s[i] - '0') * mp[s[i+1]] * (i+2 < s.length() && mp[s[i+1]] < mp[s[i+3]] ? -1 : 1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
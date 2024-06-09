#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, double> mp = {
  {'C', 12.01},
  {'H', 1.008},
  {'O', 16.00},
  {'N', 14.01}
};

void solve(void) {
  string s; cin >> s;

  double ans = 0;
  for (int i=0; i<s.length(); i++) {
    if (mp.find(s[i]) == mp.end()) continue;
    int idx = i+1;
    while (idx < s.length() && '0' <= s[idx] && s[idx] <= '9') idx++;
    ans += mp[s[i]] * (idx == i+1 ? 1 : stoi(s.substr(i+1, idx-i-1)));
    i = idx-1;
  }
  cout << fixed << setprecision(3) << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
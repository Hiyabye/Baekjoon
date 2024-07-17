#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mp = {
  {'A', 1}, {'B', 2}, {'D', 1},
  {'O', 1}, {'P', 1}, {'Q', 1}, {'R', 1}
};

void solve(void) {
  string s; getline(cin, s);

  int ans = 0;
  for (char c : s) {
    if (mp.find(c) != mp.end()) ans += mp[c];
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}
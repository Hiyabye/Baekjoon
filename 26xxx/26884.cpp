#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string s; cin >> s;
    mp[s]++;
  }

  int ans = 0;
  for (auto [_, v] : mp) {
    if (v > 1) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
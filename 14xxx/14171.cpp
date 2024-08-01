#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  unordered_map<string, long long> mp;
  while (n--) {
    string a, b; cin >> a >> b;
    if (a.substr(0, 2) == b) continue;
    string s = a.substr(0, 2) + b;
    mp[s]++;
  }

  long long ans = 0;
  for (auto [k, v] : mp) {
    string s = k.substr(2) + k.substr(0, 2);
    if (mp.find(s) != mp.end()) ans += mp[s] * v;
  }
  cout << ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
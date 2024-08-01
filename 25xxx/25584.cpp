#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  unordered_map<string, int> mp;
  while (n--) {
    for (int i=0; i<4; i++) for (int j=0; j<7; j++) {
      string s; cin >> s;
      if (s == "-") continue;
      mp[s] += 4 + (i & 1) * (2 + (i & 2) * 2);
    }
  }

  int mn = 1e9, mx = 0;
  for (auto [_, v] : mp) {
    mn = min(mn, v);
    mx = max(mx, v);
  }
  return mx - mn <= 12;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}
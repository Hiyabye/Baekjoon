#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<int, int> mp;
  while (n--) {
    int a; cin >> a;
    mp[a]++;
  }

  int ans = 0;
  for (auto [_, v] : mp) {
    ans += min(v, 2);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
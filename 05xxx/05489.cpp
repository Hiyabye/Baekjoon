#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, int> mp;
  while (n--) {
    int x; cin >> x;
    mp[x]++;
  }

  int ans = 0;
  for (auto [k, v] : mp) {
    if (v > mp[ans]) ans = k;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
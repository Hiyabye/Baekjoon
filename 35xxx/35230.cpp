#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, int> mp;
  while (n--) {
    int a; cin >> a;
    mp[a]++;
  }

  int ans = 0;
  for (const auto &[k, v] : mp) {
    if (k > v) ans += v;
    else if (k < v) ans += v - k;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
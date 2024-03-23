#include <iostream>
#include <map>
using namespace std;

map<string, int> mp = {
  {"Mon", 0}, {"Tue", 1}, {"Wed", 2}, {"Thu", 3}, {"Fri", 4}
};

void solve(void) {
  int t, n; cin >> t >> n;

  int ans = t;
  while (n--) {
    string d1, d2; int h1, h2;
    cin >> d1 >> h1 >> d2 >> h2;
    ans -= 24 * (mp[d2] - mp[d1]) + (h2 - h1);
  }
  cout << (ans < 0 ? 0 : ans > 48 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
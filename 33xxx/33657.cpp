#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<double, string> mp;
  while (n--) {
    double x, y, m; string s; cin >> x >> y >> m >> s;
    if (y * m >= 0) continue;
    mp[x - y / m] = s;
  }

  for (auto [_, s] : mp) {
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
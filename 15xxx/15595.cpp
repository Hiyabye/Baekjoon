#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;

  int cnt = 0, tot = 0;
  while (n--) {
    int a, c, d, e, f, g; string b;
    cin >> a >> b >> c >> d >> e >> f >> g;
    if (b == "megalusion") continue;
    if (c != 4) {
      mp[b] += (mp[b] != -1);
    } else if (~mp[b]) {
      cnt++;
      tot += mp[b] + 1;
      mp[b] = -1;
    }
  }
  cout << fixed << setprecision(10) << (cnt ? (double)cnt / tot * 100 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
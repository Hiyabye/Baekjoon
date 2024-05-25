#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;
  int x; cin >> x;

  map<int, bool> mp;
  mp[100 * a + 10 * b + c] = true;
  mp[100 * a + 10 * c + b] = true;
  mp[100 * b + 10 * a + c] = true;
  mp[100 * b + 10 * c + a] = true;
  mp[100 * c + 10 * a + b] = true;
  mp[100 * c + 10 * b + a] = true;

  int ans = 1;
  for (auto it=mp.begin(); it!=mp.end(); it++) {
    if (it->first == x) break;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
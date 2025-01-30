#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, s; cin >> n >> s;

  int ans = 0, cur = s;
  while (n--) {
    string t; cin >> t;
    int x = t[0] - '0' + (t.length() == 2);
    if (x > cur) ans++, cur = s;
    cur -= x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
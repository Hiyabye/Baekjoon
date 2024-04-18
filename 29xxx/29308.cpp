#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  string ans; int p = 0;
  while (n--) {
    int a; string b, c; cin >> a >> b >> c;
    if (c != "Russia") continue;
    if (a > p) p = a, ans = b;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
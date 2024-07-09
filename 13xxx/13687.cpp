#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int t, n; cin >> t >> n;
  if (t == 0 && n == 0) return false;

  int ans = 3 * n;
  while (t--) {
    string a; int b; cin >> a >> b;
    ans -= b;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
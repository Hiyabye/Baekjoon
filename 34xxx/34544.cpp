#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 1;
  while (n--) {
    int a, b; cin >> a >> b;
    ans += b + (b < 0) - a - (a < 0);
  }
  cout << ans - (ans <= 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  int ans = 1; a--;
  while (a > 0 && b > 0) {
    ans += 2;
    a--; b--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
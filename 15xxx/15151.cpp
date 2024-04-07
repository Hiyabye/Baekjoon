#include <iostream>
using namespace std;

void solve(void) {
  int k, d; cin >> k >> d;

  int ans = 0;
  while (d >= 0) d -= k * (1 << ans++);
  cout << ans - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
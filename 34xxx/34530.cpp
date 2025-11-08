#include <iostream>
using namespace std;

void solve(void) {
  int d; cin >> d;

  int ans = 1;
  while ((d * ans) % 360) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
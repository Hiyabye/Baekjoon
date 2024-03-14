#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  int ans = 0, sum = 0;
  while (sum < c) {
    sum += a;
    ans++;
    if (!(ans % 7)) sum += b;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
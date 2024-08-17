#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  int ans = 0;
  for (int i=0; i<=c; i++) for (int j=0; j<=i; j++) {
    if (a + j > b + i - j) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
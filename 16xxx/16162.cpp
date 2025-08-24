#include <iostream>
using namespace std;

void solve(void) {
  int n, a, d; cin >> n >> a >> d;

  int ans = 0;
  while (n--) {
    int x; cin >> x;
    if (x == a + d * ans) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
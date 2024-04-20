#include <iostream>
using namespace std;

void solve(void) {
  int n, s; cin >> n >> s;

  int ans = 0;
  while (n--) {
    int a; cin >> a;
    if (ans > s) ans--;
    ans += a;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
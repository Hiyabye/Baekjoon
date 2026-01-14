#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a, b; cin >> a >> b;

  int ans = b + 1;
  while (--n) {
    cin >> a >> b;
    if (ans % (a + b) < b) {
      ans += b - (ans % (a + b));
    }
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
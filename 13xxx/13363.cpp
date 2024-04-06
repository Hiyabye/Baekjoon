#include <iostream>
using namespace std;

void solve(void) {
  int n1; cin >> n1;
  int n2; cin >> n2;

  int ans = n2 - n1;
  if (ans > 180) cout << ans - 360;
  else if (ans <= -180) cout << ans + 360;
  else cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
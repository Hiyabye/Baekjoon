#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int a=1; a<=n-2; a++) {
    if (a & 1) continue;
    for (int b=1; a+b<=n-1; b++) {
      if (n-a-b >= b+2) ans++;
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
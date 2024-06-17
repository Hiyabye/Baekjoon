#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = (2*n+1)*(2*n+1);
  for (int a=-n; a<=n; a++) {
    if (a == 0) continue;
    for (int b=-n; b<=n; b++) {
      if (-n <= 1-a-b && 1-a-b <= n) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
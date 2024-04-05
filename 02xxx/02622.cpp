#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i<=n-2; i++) {
    for (int j=i; j<=n-i-1; j++) {
      if (!(i <= j && j <= n-i-j)) continue;
      if (i+j > n-i-j) ans++;
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
#include <iostream>
using namespace std;

void solve(void) {
  int n, m, p; cin >> n >> m >> p;

  long long ans = 0;
  for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) {
    if (2*(i+j) >= p) ans += (m-j+1)*(n-i+1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
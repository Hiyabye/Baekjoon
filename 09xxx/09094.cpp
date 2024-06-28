#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = 0;
  for (int a=1; a<n-1; a++) {
    for (int b=a+1; b<n; b++) {
      if ((a*a+b*b+m) % (a*b) == 0) ans++;
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
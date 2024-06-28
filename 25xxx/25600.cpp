#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int a, d, g; cin >> a >> d >> g;
    ans = max(ans, a * (d + g) * (a == d + g ? 2 : 1));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
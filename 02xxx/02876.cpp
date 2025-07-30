#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  int ans1 = 0, ans2 = 0;
  for (int i=1; i<=5; i++) {
    int mx = 0, cur = 0;
    for (int j=0; j<n; j++) {
      cur = (a[j] == i || b[j] == i) ? cur + 1 : 0;
      mx = max(mx, cur);
    }
    if (mx > ans1) ans1 = mx, ans2 = i;
  }
  cout << ans1 << " " << ans2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
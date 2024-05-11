#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int x, y; cin >> x >> y;

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (a[i] >= y) ans++;
  }
  cout << n * x / 100 << " " << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
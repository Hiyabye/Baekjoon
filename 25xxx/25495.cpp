#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 2, delta = 2;
  for (int i=1; i<n; i++) {
    delta = (a[i] != a[i-1]) ? 2 : (delta << 1);
    ans += delta;
    if (ans >= 100) delta = 1, ans = 0;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
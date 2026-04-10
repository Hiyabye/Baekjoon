#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> v(n, 0);
  for (int i=1; i<n; i++) {
    int a, b; cin >> a >> b;
    v[i] = v[i-1] + b - a;
  }

  while (q--) {
    int l, r, x; cin >> l >> r >> x; l--; r--;
    int ans = v[r] - v[l] + x;
    if (ans > 0) cout << ans << "\n";
    else cout << "B" << 1 - ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
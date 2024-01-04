#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> a(n), b(n, 0);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=1; i<n; i++) b[i] = b[i-1] + abs(a[i] - a[i-1]);

  while (q--) {
    int l, r; cin >> l >> r; l--; r--;
    cout << (l >= r ? 0 : b[r] - b[l]) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
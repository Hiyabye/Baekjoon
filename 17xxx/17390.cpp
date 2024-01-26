#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  for (int i=1; i<n; i++) a[i] += a[i-1];

  for (int i=0; i<q; i++) {
    int l, r; cin >> l >> r; l--; r--;
    cout << a[r] - (l == 0 ? 0 : a[l-1]) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
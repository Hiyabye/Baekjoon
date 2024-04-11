#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int m; cin >> m;
  while (m--) {
    int k, l, r; cin >> k >> l >> r; l--; r--;
    if (k == 1) for (int j=l; j<=r; j++) a[j] = a[j] * a[j] % 2010;
    else cout << accumulate(a.begin()+l, a.begin()+r+1, 0) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
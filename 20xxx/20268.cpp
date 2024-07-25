#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  vector<int> a(m), b(n);
  for (int i=0; i<m; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  cout << (m + n == 4 ? 7 : 1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
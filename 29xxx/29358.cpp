#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];
  for (int i=0; i<n; i++) cin >> c[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (b[i] > 0 && c[i] > 0) ans++;
    if (b[i] < a[i] && c[i] < a[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  double ans = 0;
  for (int i=0; i<n; i++) {
    ans += a[i] - (ans * a[i] / 100);
    cout << fixed << setprecision(7) << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
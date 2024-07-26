#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i];
  for (int i=0; i<n; i++) cin >> y[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=i; j<n; j++) {
      if (y[j] < x[i]) continue;
      ans = max(ans, j-i);
    }
  }
  cout << "The maximum distance is " << ans << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
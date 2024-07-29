#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> h(n+1), w(n);
  for (int i=0; i<n+1; i++) cin >> h[i];
  for (int i=0; i<n; i++) cin >> w[i];

  double ans = 0;
  for (int i=0; i<n; i++) {
    ans += (h[i] + h[i+1]) * w[i] / 2.0;
  }
  cout << fixed << setprecision(7) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
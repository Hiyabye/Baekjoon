#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, a, b; cin >> n >> a >> b;
  vector<int> d(n), e(n);
  for (int i=0; i<n; i++) cin >> d[i] >> e[i];

  double ans = 0.0;
  for (int i=0; i<n; i++) {
    ans = max(ans, (double)a / d[i]);
    ans = max(ans, (double)b / e[i]);
  }

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (i == j) continue;
    ans = max(ans, (double)a / d[i] + (double)b / e[j]);
  }
  cout << fixed << setprecision(2) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n-1), b(n-1);
  for (int i=0; i<n-1; i++) cin >> a[i] >> b[i];
  int k; cin >> k;

  vector<int> dp1(n, 1e9), dp2(n, 1e9); dp1[0] = dp2[0] = 0;
  for (int i=1; i<n; i++) {
    dp1[i] = min(dp1[i], dp1[i-1] + a[i-1]);
    dp2[i] = min(dp2[i], dp2[i-1] + a[i-1]);
    if (i > 1) {
      dp1[i] = min(dp1[i], dp1[i-2] + b[i-2]);
      dp2[i] = min(dp2[i], dp2[i-2] + b[i-2]);
    }
    if (i > 2) dp2[i] = min(dp2[i], dp1[i-3] + k);
  }
  cout << min(dp1[n-1], dp2[n-1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
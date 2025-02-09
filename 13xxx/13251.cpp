#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m; cin >> m;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];
  int k; cin >> k;

  int sum = 0;
  for (int i=0; i<m; i++) sum += v[i];

  double ans = 0;
  for (int i=0; i<m; i++) {
    if (v[i] < k) continue;
    double cur = 1;
    for (int j=0; j<k; j++) {
      cur *= (double)(v[i] - j) / (sum - j);
    }
    ans += cur;
  }
  cout << fixed << setprecision(10) << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
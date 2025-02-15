#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n), x(n), y(n);
  for (int i=0; i<n; i++) cin >> v[i];
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (v[i] && x[i] < y[i]) ans += y[i] - x[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int ans = abs(x[n-1]-x[0]) + abs(y[n-1]-y[0]);
  for (int i=1; i<n; i++) {
    ans += abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
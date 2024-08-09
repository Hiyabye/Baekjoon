#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  long long ans = 0;
  for (int i=0; i<n; i++) ans += abs(x[i] - x[(n-1)/2]) + abs(y[i] - y[(n-1)/2]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int dx = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
  int dy = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
  cout << max(dx, dy) * max(dx, dy);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
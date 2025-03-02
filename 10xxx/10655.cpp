#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int sum = 0;
  for (int i=1; i<n; i++) {
    sum += abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
  }

  int ans = sum;
  for (int i=1; i<n-1; i++) {
    int d1 = abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
    int d2 = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
    int d3 = abs(x[i+1] - x[i-1]) + abs(y[i+1] - y[i-1]);
    ans = min(ans, sum - d1 - d2 + d3);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
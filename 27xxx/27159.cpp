#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];
  sort(x.begin(), x.end());

  int ans = x[0];
  for (int i=1; i<n; i++) {
    if (x[i] - x[i-1] > 1) ans += x[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
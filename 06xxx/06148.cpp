#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, b; cin >> n >> b;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];

  int ans = 1e9;
  for (int mask=0; mask<(1<<n); mask++) {
    int sum = 0;
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) sum += h[i];
    }
    if (sum < b) continue;
    ans = min(ans, sum - b);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+1);
  for (int i=0; i<=n; i++) cin >> a[i];

  int ans = 0;
  for (int i=1; i<=n; i++) {
    int diff = abs(a[i] - a[i-1]);
    ans += min(diff, 360 - diff);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int ans = -1, mx = 0;
  for (int i=1; i<n; i++) {
    if ((a[i] - a[i-1]) / 2 <= mx) continue;
    mx = (a[i] - a[i-1]) / 2;
    ans = (a[i] + a[i-1]) / 2;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
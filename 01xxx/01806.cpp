#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, s; cin >> n >> s;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  for (int i=2; i<=n; i++) a[i] += a[i-1];

  int lo = 1, hi = 1, ans = 1e9;
  while (lo <= hi) {
    if (a[hi] - a[lo-1] >= s) {
      ans = min(ans, hi-lo+1);
      lo++;
    } else if (hi == n) break;
    else hi++;
  }
  cout << (ans == 1e9 ? 0 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
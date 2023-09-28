#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+2, 0);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0, cnt;
  for (int i=0; i<n; i++) {
    if (a[i+1] > a[i+2]) {
      cnt = min(a[i], a[i+1]-a[i+2]);
      ans += 5*cnt;
      a[i] -= cnt; a[i+1] -= cnt;

      cnt = min(min(a[i], a[i+1]), a[i+2]);
      ans += 7*cnt;
      a[i] -= cnt; a[i+1] -= cnt; a[i+2] -= cnt;
    } else {
      cnt = min(min(a[i], a[i+1]), a[i+2]);
      ans += 7*cnt;
      a[i] -= cnt; a[i+1] -= cnt; a[i+2] -= cnt;
      
      cnt = min(a[i], a[i+1]);
      ans += 5*cnt;
      a[i] -= cnt; a[i+1] -= cnt;
    }
    ans += 3*a[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
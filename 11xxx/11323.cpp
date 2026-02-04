#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(6);
  for (int i=0; i<6; i++) cin >> v[i];

  int ans = 0, cur = 0, idx = 0;
  while (cur < n) {
    int x = v[idx];
    idx = (idx + 1) % 6;
    if (cur + x > n) continue;
    cur += x;
    ans += cur;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];

  int ans = 0, cur = 1;
  while (cur != n && ans++ < 100000) {
    cur = a[cur];
  }
  if (n == 1) ans = 1;

  cout << (ans == 100001 ? 0 : ans) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
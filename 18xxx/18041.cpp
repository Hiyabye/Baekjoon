#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0, cnt = 1;
  for (int i=1; i<n; i++) {
    if (a[i] - a[i-1] <= x) cnt++;
    else cnt = 1;
    ans = max(ans, cnt);
  }
  cout << (n == 1 ? 1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
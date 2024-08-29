#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  int ans = -1, mn = 100;
  for (int i=1; i<n-1; i++) {
    int cur = max(t[i-1], t[i+1]);
    if (cur >= mn) continue;
    mn = cur;
    ans = i;
  }
  cout << ans << " " << mn;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> h(n), v(n);
  for (int i=0; i<n; i++) cin >> h[i];
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) ans = max(ans, v[i] - h[i]);
  for (int i=0; i<n-1; i++) {
    int cur = 0;
    for (int j=0; j<i; j++) cur = max(cur, v[j] - h[j]);
    cur = max(cur, v[i] - h[i] + 1);
    ans = min(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];
  sort(p.begin(), p.end());

  int ans = 1e9;
  for (int i=n/2; i<n; i++) {
    ans = min(ans, p[i] - p[i-n/2]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
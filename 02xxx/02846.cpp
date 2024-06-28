#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  int ans = 0, cur = 0;
  for (int i=0; i<n-1; i++) {
    if (p[i+1] > p[i]) cur += p[i+1] - p[i];
    else cur = 0;
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
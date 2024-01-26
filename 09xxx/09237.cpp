#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];
  sort(t.begin(), t.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans = max(ans, t[i] + n-i+1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
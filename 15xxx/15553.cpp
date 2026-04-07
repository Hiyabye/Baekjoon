#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> t(n, 0);
  for (int i=0; i<n; i++) cin >> t[i];

  vector<int> d(n, 0);
  for (int i=1; i<n; i++) d[i] = t[i] - t[i-1] - 1;
  sort(d.begin(), d.end(), greater<int>());

  int ans = t[n-1] + 1 - t[0];
  for (int i=0; i<k-1; i++) ans -= d[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
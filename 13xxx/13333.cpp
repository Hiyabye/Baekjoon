#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  for (int i=0; i<=n; i++) {
    int idx = v.end() - lower_bound(v.begin(), v.end(), i);
    if (idx >= i && v[n-i-1] <= i) return i;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  cout << solve();
  return 0;
}
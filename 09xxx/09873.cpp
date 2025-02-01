#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = 0;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    long long a = v[j] + (v[j] - v[i]), b = v[j] + 2 * (v[j] - v[i]);
    ans += distance(lower_bound(v.begin(), v.end(), a), upper_bound(v.begin(), v.end(), b));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = -1e9, sum = 0;
  for (int i=0; i<k; i++) sum += v[i];
  ans = max(ans, sum);

  for (int i=1; i<n-k+1; i++) {
    sum = sum - v[i-1] + v[i+k-1];
    ans = max(ans, sum);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
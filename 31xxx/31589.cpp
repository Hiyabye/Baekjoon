#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<long long> t(n);
  for (int i=0; i<n; i++) cin >> t[i];
  sort(t.begin(), t.end());

  long long ans = 0;
  for (int i=0; i<(k+1)/2; i++) ans += t[n-i-1];
  for (int i=0; i<(k-1)/2; i++) ans -= t[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
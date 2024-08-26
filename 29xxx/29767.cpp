#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=1; i<n; i++) a[i] += a[i-1];
  sort(a.begin(), a.end(), greater<long long>());

  long long ans = 0;
  for (int i=0; i<k; i++) ans += a[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
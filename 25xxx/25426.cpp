#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];
  sort(a.begin(), a.end());

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += a[i] * (i+1) + b[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
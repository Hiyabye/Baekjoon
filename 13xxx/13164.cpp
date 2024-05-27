#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  vector<long long> b(n-1);
  for (int i=0; i<n-1; i++) {
    b[i] = a[i+1] - a[i];
  }
  sort(b.begin(), b.end(), greater<long long>());

  long long ans = a[n-1] - a[0];
  for (int i=0; i<k-1; i++) ans -= b[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
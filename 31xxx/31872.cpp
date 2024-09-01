#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  vector<int> b(n);
  for (int i=0; i<n; i++) {
    b[i] = a[i+1] - a[i];
  }
  sort(b.begin(), b.end(), greater<int>());

  long long ans = 0;
  for (int i=k; i<n; i++) {
    ans += b[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
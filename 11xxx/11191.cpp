#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<long long> basis(64, 0);
  for (int i=0; i<n; i++) for (int j=63; j>=0; j--) {
    if (a[i] & (1LL << j)) {
      if (basis[j]) {
        a[i] ^= basis[j];
      } else {
        basis[j] = a[i];
        break;
      }
    }
  }

  long long ans = 0;
  for (int i=63; i>=0; i--) {
    ans = max(ans, ans ^ basis[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
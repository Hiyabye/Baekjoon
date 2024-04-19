#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<long long> b(n, 0);
  for (int i=n-2; i>=0; i--) {
    b[i] = b[i+1] + a[i+1];
  }

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += a[i] * b[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
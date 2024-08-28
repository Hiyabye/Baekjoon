#include <iostream>
using namespace std;

bool check(int n, int k, int mask) {
  int cnt = 1;
  for (int i=1; i<n; i++) {
    if (((mask >> (i-1)) & 1) ^ ((mask >> i) & 1)) cnt = 1;
    else cnt++;
    if (cnt > k) return false;
  }
  return true;
}

void solve(void) {
  int n, k; cin >> n >> k;

  int ans = 0;
  for (int mask=0; mask<(1<<n); mask++) {
    if (check(n, k, mask)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
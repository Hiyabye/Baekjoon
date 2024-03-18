#include <iostream>
using namespace std;

int solve(void) {
  int n, k; cin >> n >> k;

  int cnt = 0;
  for (int i=1; i<=n; i++) {
    if (n % i) continue;
    cnt++;
    if (cnt == k) return i;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
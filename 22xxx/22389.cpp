#include <iostream>
#include <vector>
using namespace std;

bool leap(int n, const vector<int> &a, int y) {
  for (int i=0; i<n; i++) {
    if (y % a[i]) continue;
    return i % 2 == 0;
  }
  return n % 2 == 0;
}

bool solve(void) {
  int n, l, r; cin >> n >> l >> r;
  if (n == 0 && l == 0 && r == 0) return false;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int i=l; i<=r; i++) {
    ans += leap(n, a, i);
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n) {
  vector<bool> d(10, false);
  while (n) {
    if (d[n % 10]) return false;
    d[n % 10] = true;
    n /= 10;
  }
  return true;
}

int solve(void) {
  int l, r; cin >> l >> r;

  for (int i=l; i<=r; i++) {
    if (check(i)) return i;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
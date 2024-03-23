#include <iostream>
using namespace std;

int solve(void) {
  int n; cin >> n;

  if (n < 0) return 32;
  for (int i=1; i<31; i++) {
    if (n < (1<<i)) return i;
  }
  return 31;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
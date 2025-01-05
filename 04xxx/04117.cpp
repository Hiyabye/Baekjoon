#include <iostream>
using namespace std;

bool solve(void) {
  int n, t1, t2, t3; cin >> n >> t1 >> t2 >> t3;
  if (n == 0 && t1 == 0 && t2 == 0 && t3 == 0) return false;

  int ans = 4 * n - 1;
  ans += t2 - t1 + (t1 > t2 ? n : 0);
  ans += t2 - t3 + (t2 < t3 ? n : 0);

  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
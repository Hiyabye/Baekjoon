#include <iostream>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 0;
  while (n) {
    ans += n / 5;
    n /= 5;
  }
  cout << "Case #" << idx << ": " << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}
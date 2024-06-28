#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  long long ans = 1;
  int i = n+1, j = 2;
  while (i <= 2*n || j <= n+1) {
    if (i <= 2*n) ans *= i++;
    if (j <= n+1 && ans % j == 0) ans /= j++;
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
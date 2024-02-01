#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 0, fact = 1;
  for (int i=1; i<=5; i++) {
    fact *= i;
    ans += (n % 10) * fact;
    n /= 10;
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
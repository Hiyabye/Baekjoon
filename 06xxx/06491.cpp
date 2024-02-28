#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 0;
  for (int i=1; i<=n-1; i++) {
    if (!(n % i)) ans += i;
  }

  cout << n << " " << (ans < n ? "DEFICIENT" : ans == n ? "PERFECT" : "ABUNDANT") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
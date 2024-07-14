#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 0;
  for (int i=2; i<=2*n; i++) {
    if (2*n % i) continue;
    int j = 2*n/i-i+1;
    if (j > 0 && j % 2 == 0) ans++;
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
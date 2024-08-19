#include <iostream>
using namespace std;

bool solve(void) {
  long long n, k; cin >> n >> k;
  if (n == 0 && k == 0) return false;

  long long ans = 1;
  for (int i=1; i<=k && i<=n-k; i++) {
    ans = ans * (n-i+1) / i;
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
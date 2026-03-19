#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k; n--; k--;

  if (n == 0) cout << 0;
  else if (k == 0 || n % k) cout << -1;
  else cout << n / k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
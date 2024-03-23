#include <iostream>
using namespace std;

int solve(void) {
  int n; cin >> n;
  if (n == 1) return 0;

  int ans = 2;
  for (int i=3; i<=n; i++) ans *= 3;
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
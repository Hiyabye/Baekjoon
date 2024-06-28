#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 1;
  for (int i=1; i<=n; i++) ans *= i;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
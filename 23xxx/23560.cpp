#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 2;
  for (int i=1; i<n; i++) ans *= 3;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

void solve(void) {
  int c, n; cin >> c >> n;

  if (c < n) cout << c + 1;
  else if (c > n) cout << 0;
  else cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
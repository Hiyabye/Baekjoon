#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  if (n == 1) cout << 1;
  else if (n == 2) cout << min(4, (m + 1) / 2);
  else if (m < 7) cout << min(4, m);
  else cout << m - 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

int solve(void) {
  int a, m; cin >> a >> m;

  for (int i=1; i<=m; i++) {
    if ((a*i) % m == 1) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
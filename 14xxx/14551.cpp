#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = 1;
  while (n--) {
    int a; cin >> a;
    if (a == 0) continue;
    ans = ans * a % m;
  }
  cout << ans % m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

void solve(void) {
  int n, a, b; cin >> n >> a >> b;

  int x = 0, y = 0, z = 0;
  for (int i=1; i<=n; i++) {
    if (i % a == 0 && i % b == 0) z++;
    else if (i % a == 0) x++;
    else if (i % b == 0) y++;
  }
  cout << x << " " << y << " " << z;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
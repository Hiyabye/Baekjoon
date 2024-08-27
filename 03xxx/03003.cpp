#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

  cout << 1-a << " " << 1-b << " " << 2-c << " " << 2-d << " " << 2-e << " " << 8-f;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
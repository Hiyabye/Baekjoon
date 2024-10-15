#include <iostream>
using namespace std;

void solve(void) {
  int n, a, b; cin >> n >> a >> b;

  int c = 1, d = 1;
  while (n--) {
    c += a; d += b;
    if (c < d) swap(c, d);
    else if (c == d) d--;
  }
  cout << c << " " << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
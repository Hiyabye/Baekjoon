#include <iostream>
using namespace std;

int check(int t, int a, int r) {
  return t % (a + r) && t % (a + r) <= a;
}

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;
  int p, m, n; cin >> p >> m >> n;

  cout << check(p, a, b) + check(p, c, d) << "\n";
  cout << check(m, a, b) + check(m, c, d) << "\n";
  cout << check(n, a, b) + check(n, c, d) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
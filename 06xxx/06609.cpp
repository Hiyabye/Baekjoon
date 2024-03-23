#include <iostream>
#include <tuple>
using namespace std;

void solve(void) {
  int m, p, l, e, r, s, n;
  
  while (cin >> m >> p >> l >> e >> r >> s >> n) {
    while (n--) tie(m, p, l) = make_tuple(p/s, l/r, m*e);
    cout << m << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int p1, p2, p3; cin >> p1 >> p2 >> p3;
  double c1, c2, c3; cin >> c1 >> c2 >> c3;
  if (p1 > p2) swap(p1, p2);
  if (p2 > p3) swap(p2, p3);
  if (p1 > p2) swap(p1, p2);

  double one = (p1 + p2 + p3) * c1 / 100;
  double two = p2 * min(c2, c3) / 100 + p3 * max(c2, c3) / 100;
  cout << (one > two ? "one " : "two ") << fixed << setprecision(2) << max(one, two);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
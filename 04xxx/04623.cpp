#include <algorithm>
#include <iostream>
using namespace std;

bool solve(void) {
  double a, b, c, d; cin >> a >> b >> c >> d;
  if (a == 0 && b == 0 && c == 0 && d == 0) return false;

  cout << (int)min(100.0, 100.0 * min(max(c, d) / max(a, b), min(c, d) / min(a, b))) << "%\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
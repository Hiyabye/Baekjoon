#include <iostream>
using namespace std;

char solve(void) {
  int x1, y1, z1; cin >> x1 >> y1 >> z1;
  int x2, y2, z2; cin >> x2 >> y2 >> z2;

  if (z1 != z2) return 'E';
  if (y1 > 2 * y2) return 'E';
  if (y1 != y2) return 'D';
  if (x1 > 2 * x2) return 'C';
  if (x1 != x2) return 'B';
  return 'A';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  cout << solve();
  return 0;
}
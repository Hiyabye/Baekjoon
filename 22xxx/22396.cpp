#include <iostream>
using namespace std;

bool solve(void) {
  int r0, w0, c, r; cin >> r0 >> w0 >> c >> r;
  if (r0 == 0 && w0 == 0 && c == 0 && r == 0) return false;

  cout << (w0*c>r0 ? (w0*c-r0+r-1)/r : 0) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
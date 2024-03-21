#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string g; cin >> g;
  if (g == "#") return false;

  int y, m, d; cin >> y >> m >> d;
  if (y >= 32 || (y == 31 && m >= 5)) cout << "? " << y - 30;
  else cout << g << " " << y;
  cout << " " << m << " " << d << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
#include <iostream>
using namespace std;

bool solve(void) {
  int y, m, d; cin >> y >> m >> d;

  return y < 1989 || (y == 1989 && m < 2) || (y == 1989 && m == 2 && d <= 27);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "Yes" : "No") << "\n";
  return 0;
}
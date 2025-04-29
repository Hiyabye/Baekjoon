#include <iostream>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;

  int x = 0, y = 0;
  while (n--) {
    int a, b; cin >> a >> b;
    if (a > m || (x && b * x > y * a)) continue;
    if (b * x < y * a || a > x) {
      x = a, y = b;
    }
  }

  if (x) {
    cout << "Buy " << x << " tickets for $" << y << "\n";
  } else {
    cout << "No suitable tickets offered\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
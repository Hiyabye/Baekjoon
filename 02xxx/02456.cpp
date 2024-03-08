#include <iostream>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;

  pair<int, int> a = {0, 0}, b = {0, 0}, c = {0, 0};
  while (n--) {
    int x, y, z; cin >> x >> y >> z;
    a.first += x; b.first += y; c.first += z;
    if (x == 3) a.second++;
    if (y == 3) b.second++;
    if (z == 3) c.second++;
  }

  if (a == b && b == c) cout << 0 << " " << a.first;
  else if (a == b && b > c) cout << 0 << " " << a.first;
  else if (b == c && c > a) cout << 0 << " " << b.first;
  else if (c == a && a > b) cout << 0 << " " << c.first;
  else if (a > b && a > c) cout << 1 << " " << a.first;
  else if (b > a && b > c) cout << 2 << " " << b.first;
  else cout << 3 << " " << c.first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
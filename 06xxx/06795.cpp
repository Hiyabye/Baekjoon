#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d, s;
  cin >> a >> b >> c >> d >> s;

  int x = 0, y = 0, p = a, q = c;
  while (s--) {
    if (p > 0) {
      x++; p--;
      if (p == 0) p = -b;
    } else {
      x--; p++;
      if (p == 0) p = a;
    }
    if (q > 0) {
      y++; q--;
      if (q == 0) q = -d;
    } else {
      y--; q++;
      if (q == 0) q = c;
    }
  }

  if (x == y) cout << "Tied";
  else if (x > y) cout << "Nikky";
  else cout << "Byron";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
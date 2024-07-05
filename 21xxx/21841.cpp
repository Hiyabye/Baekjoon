#include <iostream>
using namespace std;

void solve(void) {
  int p, w, n; cin >> p >> w >> n;

  int a = 0, b = 0;
  while (n--) {
    char x; int y; cin >> x >> y;
    if (x == 'P') a++;
    else b++;
  }
  cout << a * p + b * w - a * b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
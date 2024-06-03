#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int x, y, r; cin >> x >> y >> r;

  int a = 0, b = 0;
  while (n--) {
    int t; cin >> t;
    if (abs(x - t) < r) a++;
    if (abs(x - t) == r) b++;
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
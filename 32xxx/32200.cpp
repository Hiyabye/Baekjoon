#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, x, y; cin >> n >> x >> y;

  int cnt = 0, left = 0;
  while (n--) {
    int a; cin >> a;
    cnt += a / x;
    left += max(0, a % x - a / x * (y - x));
  }
  cout << cnt << "\n" << left;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
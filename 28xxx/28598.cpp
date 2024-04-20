#include <iostream>
using namespace std;

bool solve(void) {
  int x1, x2, n; cin >> x1 >> x2 >> n;

  x1 -= x2;
  if (x1 < 0) return false;
  if (x1 == 0) return n == 0;
  if (x1 / 2 < n) return false;
  if (x1 % 2) return false;
  return n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}
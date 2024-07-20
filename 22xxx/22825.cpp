#include <algorithm>
#include <iostream>
using namespace std;

inline int cube(int n) {
  return n * n * n;
}

inline int cube_root(int n) {
  int x = 0;
  while (x * x * x <= n) x++;
  return --x;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = cube(n);
  for (int i=1; i<n; i++) {
    int x = cube(n) - cube(i);
    ans = min(ans, x - cube(cube_root(x)));
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
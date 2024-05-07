#include <cmath>
#include <iostream>
using namespace std;

int solve(void) {
  int n, e; cin >> n >> e;

  int a = 0, b = 0;
  for (int i=1; i<n; i++) {
    int x; cin >> x;
    a += x;
  }
  for (int i=1; i<e; i++) {
    int x; cin >> x;
    b += x;
  }
  
  if (n == 1 && e == 1) return 0;
  else if (n == 1)      return b;
  else if (e == 1)      return a;
  else                  return ceil(hypot(a, b));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
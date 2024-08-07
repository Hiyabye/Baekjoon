#include <algorithm>
#include <iostream>
using namespace std;

inline int cubic(int x) {
  return x * x * x;
}

inline int tetra(int x) {
  return x * (x + 1) * (x + 2) / 6;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 0;
  for (int i=0; cubic(i)<=n; i++) {
    for (int j=0; cubic(i)+tetra(j)<=n; j++) {
      ans = max(ans, cubic(i)+tetra(j));
    }
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
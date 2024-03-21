#include <algorithm>
#include <iostream>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int a; cin >> a;
    ans += min(a, m / n);
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
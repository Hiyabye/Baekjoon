#include <iostream>
using namespace std;

inline int perc(int n, int p) {
  return n * p / 100;
}

void solve(void) {
  int n; cin >> n;

  if (n >= 1000000) cout << perc(n, 20) << " " << perc(n, 80);
  else if (n >= 500000) cout << perc(n, 15) << " " << perc(n, 85);
  else if (n >= 100000) cout << perc(n, 10) << " " << perc(n, 90);
  else cout << perc(n, 5) << " " << perc(n, 95);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
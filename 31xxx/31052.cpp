#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> x(n+1);
  for (int i=1; i<=n; i++) cin >> x[i];

  while (q--) {
    int op, a, b; cin >> op >> a >> b;
    if (op == 1) {
      x[a] = b;
    } else if (op == 2) {
      cout << abs(x[a] - x[b]) << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
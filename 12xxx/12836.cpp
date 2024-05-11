#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<long long> v(n+1, 0);

  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int p, x; cin >> p >> x;
      v[p] += x;
    } else {
      int p, q; cin >> p >> q;
      long long sum = 0;
      for (int i=p; i<=q; i++) sum += v[i];
      cout << sum << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
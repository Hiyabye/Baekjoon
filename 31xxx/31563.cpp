#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<long long> v(n+1, 0);
  for (int i=1; i<=n; i++) cin >> v[i];
  for (int i=1; i<=n; i++) v[i] += v[i-1];

  int idx = 0;
  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int k; cin >> k;
      idx = (idx - k + n) % n;
    } else if (op == 2) {
      int k; cin >> k;
      idx = (idx + k) % n;
    } else if (op == 3) {
      int a, b; cin >> a >> b;
      a = (a + idx - 1) % n + 1;
      b = (b + idx - 1) % n + 1;
      cout << (a > b ? v[n]-v[a-1]+v[b] : v[b]-v[a-1]) << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
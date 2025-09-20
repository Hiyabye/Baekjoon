#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int idx = 0;
  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int i, x; cin >> i >> x; i--;
      a[(idx+i) % n] += x;
    } else if (op == 2) {
      int s; cin >> s;
      idx = (idx+n-s) % n;
    } else if (op == 3) {
      int s; cin >> s;
      idx = (idx+s) % n;
    }
  }

  for (int i=0; i<n; i++) {
    cout << a[(idx+i) % n] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
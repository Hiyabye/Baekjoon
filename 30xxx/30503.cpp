#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int q; cin >> q;
  while (q--) {
    int op, l, r; cin >> op >> l >> r; l--; r--;
    if (op == 1) {
      int k; cin >> k;
      cout << count(a.begin()+l, a.begin()+r+1, k) << "\n";
    } else if (op == 2) {
      fill(a.begin()+l, a.begin()+r+1, 0);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
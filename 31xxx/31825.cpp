#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  string s; cin >> s;

  while (q--) {
    int op, l, r; cin >> op >> l >> r; l--; r--;
    if (op == 1) {
      int cnt = 1;
      for (int i=l+1; i<=r; i++) {
        if (s[i] != s[i-1]) cnt++;
      }
      cout << cnt << "\n";
    } else if (op == 2) {
      for (int i=l; i<=r; i++) {
        s[i] = (s[i] - 'A' + 1) % 26 + 'A';
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
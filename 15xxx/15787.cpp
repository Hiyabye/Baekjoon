#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<int> v(n, 0);
  while (m--) {
    int op; cin >> op;
    if (op == 1) {
      int i, x; cin >> i >> x; i--; x--;
      v[i] |= 1 << x;
    } else if (op == 2) {
      int i, x; cin >> i >> x; i--; x--;
      v[i] &= ~(1 << x);
    } else if (op == 3) {
      int i; cin >> i; i--;
      v[i] <<= 1;
      v[i] &= (1 << 20) - 1;
    } else if (op == 4) {
      int i; cin >> i; i--;
      v[i] >>= 1;
    }
  }

  set<int> s;
  for (int x : v) s.insert(x);
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
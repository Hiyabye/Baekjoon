#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int l, r; cin >> l >> r;
  while (--n) {
    int s, e; cin >> s >> e;
    l = max(l, s);
    r = min(r, e);
  }
  cout << max(0, l - r);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
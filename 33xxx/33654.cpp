#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int mx; cin >> mx; cout << mx;
  while (--n) {
    int x; cin >> x;
    if (x < mx) continue;
    cout << " " << x;
    mx = x;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
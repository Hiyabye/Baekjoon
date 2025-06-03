#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int t, b; cin >> t >> b;
  while (--n) {
    int _t, _b; cin >> _t >> _b;
    t = max(t, _t);
    b = min(b, _b);
  }
  cout << (t * b) % 7 + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
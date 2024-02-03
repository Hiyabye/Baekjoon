#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int l, n; cin >> l >> n;

  int a = 0, b = 0;
  for (int i=0; i<n; i++) {
    int ant; cin >> ant;
    a = max(a, min(ant, l-ant));
    b = max(b, max(ant, l-ant));
  }
  cout << a << " " << b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
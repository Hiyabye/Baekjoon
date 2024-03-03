#include <iostream>
using namespace std;

void solve(void) {
  int k, n; cin >> k >> n;

  cout << k << " " << n*(n+3)/2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}
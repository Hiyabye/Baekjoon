#include <iostream>
using namespace std;

void solve(void) {
  int k, n; cin >> k >> n;

  cout << k << " " << n*(n+1)/2 << " " << n*n << " " << n*(n+1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}
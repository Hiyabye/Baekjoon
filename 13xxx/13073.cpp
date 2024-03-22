#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << n*(n+1)/2 << " " << n*n << " " << n*(n+1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
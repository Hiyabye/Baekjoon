#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, a, b; cin >> n >> a >> b;

  cout << max(a-b, 0) << " " << min(n-b, a) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
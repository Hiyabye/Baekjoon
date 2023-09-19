#include <iostream>
#include <cmath>
using namespace std;

void solve(void) {
  long long n, m; cin >> n >> m;

  long long l2 = log2(n);
  cout << l2+m+1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
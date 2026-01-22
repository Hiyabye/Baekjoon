#include <iostream>
using namespace std;

void solve(void) {
  long long a, b, n; cin >> a >> b >> n;

  long long c = (n + 1) / 2, d = n / 2;
  cout << (a * c + b * d) * (a * d + b * c) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
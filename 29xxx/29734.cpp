#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long n, m; cin >> n >> m;
  long long t, s; cin >> t >> s;

  long long a = (n - 1) / 8;
  long long b = (m - 1) / 8;
  long long c = n + a * s;
  long long d = m + b * s + t + 2 * b * t;

  cout << (c < d ? "Zip" : "Dok") << "\n" << min(c, d);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
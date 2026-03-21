#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m, a, b; cin >> n >> m >> a >> b;
  int q = n / m, r = n % m;

  cout << n + q * min(a, m * b) + min(a, r * b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
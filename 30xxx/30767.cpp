#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;

  cout << max(0LL, min(b, n - c) - max(a, n - d) + 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
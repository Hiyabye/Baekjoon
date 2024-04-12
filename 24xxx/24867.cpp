#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long k; cin >> k;
  long long a, x; cin >> a >> x;
  long long b, y; cin >> b >> y;

  long long c = max(0LL, k-a) * x + max(0LL, k-a-b) * y;
  long long d = max(0LL, k-b) * y + max(0LL, k-a-b) * x;
  cout << max({0LL, c, d});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
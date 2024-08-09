#include <algorithm>
#include <iostream>
using namespace std;

inline long long calc(long long x) {
  return x * (x + 1) * 2;
}

void solve(void) {
  long long n, k; cin >> n >> k;

  cout << calc(n) - calc(max(0LL, n-k-1)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
#include <iostream>
using namespace std;

inline long long msb(long long x) {
  return 1LL << (63 - __builtin_clzll(x));
}

void solve(void) {
  long long n; cin >> n;

  long long a = msb(n);
  long long b = a - 1;
  long long c = (a << 1) - 1;

  if (n == c) cout << "1\n" << n;
  else cout << "2\n" << ((a ^ b) ^ n) << "\n" << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
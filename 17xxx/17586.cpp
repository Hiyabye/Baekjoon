#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  long long m, n; cin >> m >> n;

  long long g = gcd(m, n);
  if (((m / g) & 1) && ((n / g) & 1)) cout << g;
  else cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
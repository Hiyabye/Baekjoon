#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;

  long long p = 0, q = 1;
  while (n--) {
    long long a; cin >> a;
    long long g = gcd(p * a + q, q * a);
    p = (p * a + q) / g;
    q = q * a / g;
  }
  cout << q << "/" << p;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
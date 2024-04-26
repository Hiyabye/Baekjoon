#include <iostream>
using namespace std;

bool prime(int n) {
  if (n < 2) return false;
  for (int i=2; i*i<=n; i++) if (!(n % i)) return false;
  return true;
}

long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

bool solve(void) {
  int p, a; cin >> p >> a;
  if (p == 0 && a == 0) return false;

  cout << (!prime(p) && power(a, p, p) == a ? "yes" : "no") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
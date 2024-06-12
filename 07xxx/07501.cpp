#include <iostream>
using namespace std;

inline long long mulmod(__int128 a, __int128 b, __int128 mod) {
  return a * b % mod;
}

long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = mulmod(ret, base, mod);
    base = mulmod(base, base, mod);
    exp >>= 1;
  }
  return ret;
}

bool miller_rabin(long long n, long long a) {
  int r = 0;
  long long d = n-1;
  while (!(d & 1)) {
    r++;
    d >>= 1;
  }

  long long x = power(a, d, n);
  if (x == 1 || x == n-1) return true;
  for (int i=0; i<r-1; i++) {
    x = mulmod(x, x, n);
    if (x == n-1) return true;
  }
  return false;
}

// https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test#Testing_against_small_sets_of_bases
bool prime(long long n) {
  long long a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
  if (n <= 1) return false;
  if (n == 2 || n == 3) return true;
  if (!(n & 1)) return false;

  for (int i=0; i<9; i++) {
    if (n == a[i]) return true;
    if (!miller_rabin(n, a[i])) return false;
  }
  return true;
}

void solve(void) {
  long long a, b; cin >> a >> b;

  for (long long i=a; i<=b; i++) {
    if (!(i & 1)) continue;
    if (i == 9 || prime(i)) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
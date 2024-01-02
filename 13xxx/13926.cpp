#include <iostream>
#include <cstdlib>
#define int128 __int128
using namespace std;

int128 gcd(int128 a, int128 b) {
  if (!b) return a;
  return gcd(b, a % b);
}

int128 power(int128 base, int128 exp, int128 mod) {
  if (exp == 0) return 1;
  if (exp == 1) return base % mod;
  int128 half = power(base, exp/2, mod) % mod;
  if (exp % 2 == 0) return half * half % mod;
  return (half * half % mod) * base % mod;
}

bool miller_rabin(int128 n, int128 a) {
  int r = 0;
  int128 d = n-1;
  while (d % 2 == 0) {
    r++;
    d >>= 1;
  }

  int128 x = power(a, d, n);
  if (x == 1 || x == n-1) return true;
  for (int i=0; i<r-1; i++) {
    x = x * x % n;
    if (x == n-1) return true;
  }
  return false;
}

bool prime(int128 n) {
  int128 a[5] = {2, 3, 5, 7, 11};
  if (n <= 1) return false;
  if (n == 2 || n == 3) return true;
  if (n % 2 == 0) return false;

  for (int i=0; i<5; i++) {
    if (n == a[i]) return true;
    if (!miller_rabin(n, a[i])) return false;
  }
  return true;
}

int128 pollard_rho(int128 n) {
  if (n % 2 == 0) return 2;
  if (prime(n)) return n;

  int128 x = rand() % (n-2) + 2;
  int128 y = x;
  int128 c = rand() % 10 + 1;
  int128 d = 1;
  while (d == 1) {
    x = (x * x % n + c) % n;
    y = (y * y % n + c) % n;
    y = (y * y % n + c) % n;
    d = gcd(x > y ? x - y : y - x, n);
    if (d == n) return pollard_rho(n);
  }
  if (prime(d)) return d;
  return pollard_rho(d);
}

void solve(void) {
  long long n;
  cin >> n;

  long long ans = n;
  while (n != 1) {
    long long p = pollard_rho(n);
    ans = ans / p * (p-1);
    while (n % p == 0) n /= p;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <map>
using namespace std;
using int128 = __int128;

int128 power(int128 base, int128 exp, int128 mod) {
  int128 ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

bool miller_rabin(int128 n, int128 a) {
  int r = 0;
  int128 d = n-1;
  while (!(d & 1)) {
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

bool prime(long long n) {
  if (n <= 1) return false;
  if (n == 2 || n == 3) return true;
  if (!(n & 1)) return false;

  int128 a[5] = {2, 3, 5, 7, 11};
  for (int i=0; i<5; i++) {
    if (n == a[i]) return true;
    if (!miller_rabin(n, a[i])) return false;
  }
  return true;
}

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

long long pollard_rho(long long n) {
  if (!(n & 1)) return 2;
  if (prime(n)) return n;

  int128 x = rand() % (n-2) + 2;
  int128 y = x;
  int128 c = rand() % 10 + 1;
  int128 d = 1;
  while (d == 1) {
    x = (x * x % n + c) % n;
    y = (y * y % n + c) % n;
    y = (y * y % n + c) % n;
    d = gcd((x-y > 0) ? (x-y) : -(x-y), n);
    if (d == n) return pollard_rho(n);
  }
  if (prime(d)) return d;
  else return pollard_rho(d);
}

map<long long, int> factorize(long long n) {
  map<long long, int> factors;
  while (n != 1) {
    long long d = pollard_rho(n);
    factors[d]++;
    n /= d;
  }
  return factors;
}

bool one(const map<long long, int> &factors) {
  for (auto [_, exp] : factors) {
    if (exp % 2 == 1) return false;
  }
  return true;
}

// Fermat's Two-Square Theorem
bool two(const map<long long, int> &factors) {
  for (auto it = factors.begin(); it != factors.end(); it++) {
    if (it->first % 4 == 3 && it->second % 2 == 1) return false;
  }
  return true;
}

// Lagrange’s Three-Square Theorem
bool three(long long n) {
  while (n % 4 == 0) n /= 4;
  return n % 8 != 7;
}

void solve(void) {
  long long n; cin >> n;

  map<long long, int> factors = factorize(n);
  if (one(factors)) cout << 1;
  else if (two(factors)) cout << 2;
  else if (three(n)) cout << 3;
  else cout << 4; // Lagrange’s Four-Square Theorem
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
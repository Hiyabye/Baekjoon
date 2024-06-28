#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#define int128 __int128
using namespace std;

int128 power(int128 base, int128 exp, int128 mod) {
  int128 ret = 1;
  while (exp) {
    if (exp & 1) ret = (ret * base) % mod;
    base = (base * base) % mod;
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

set<long long> factorize(long long n) {
  set<long long> ret;
  ret.insert(1);

  while (n != 1) {
    long long p = pollard_rho(n);
    n /= p;

    vector<long long> tmp;
    for (auto it=ret.begin(); it!=ret.end(); it++) {
      tmp.push_back(*it * p);
    }
    while (!tmp.empty()) {
      ret.insert(tmp.back());
      tmp.pop_back();
    }
  }
  return ret;
}

long long four(long long n) {
  if (n == 0) return 1;

  set<long long> factors = factorize(n);
  long long ret = 0;
  for (auto it=factors.begin(); it!=factors.end(); it++) {
    if (*it > sqrt(n)) break;
    if (*it % 4 != 0) ret += *it;
    if (*it * *it == n) continue;
    if ((n / *it) % 4 != 0) ret += (n / *it);
  }
  return ret * 8;
}

long long five(long long n) {
  if (n == 0) return 1;

  long long ret = four(n);
  for (long long i=1; i<=sqrt(n); i++) {
    ret += four(n-i*i)*2;
  }
  return ret;
}

void solve(void) {
  long long n;
  cin >> n;

  cout << four(n) << "\n" << five(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <random>
#include <string>
#include <unordered_set>
using namespace std;
using int128 = __int128;

inline int128 power(int128 base, int128 exp, int128 mod) {
  int128 ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

inline bool miller_rabin(int128 n, int128 a) {
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

inline bool prime(long long n) {
  if (n <= 1) return false;
  if (n == 2 || n == 3) return true;
  if (!(n & 1)) return false;

  int128 a[9] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
  for (int i=0; i<9; i++) {
    if (n == a[i]) return true;
    if (!miller_rabin(n, a[i])) return false;
  }
  return true;
}

inline long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

inline long long pollard_rho(long long n) {
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
  return prime(d) ? d : pollard_rho(d);
}

inline int digit(long long n) {
  int ret = 0;
  while (n) n /= 10, ret++;
  return ret;
}

inline unordered_set<long long> factors(long long n) {
  unordered_set<long long> s; s.insert(1);
  while (n != 1) {
    long long d = pollard_rho(n);
    unordered_set<long long> t = s;
    for (long long x : t) s.insert(x * d);
    n /= d;
  }
  return s;
}

inline bool check(long long a, long long b, long long n) {
  string s = to_string(a) + to_string(b);
  string t = to_string(n);
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  return s == t;
}

inline bool solve(void) {
  long long n; cin >> n;
  if (n == 0) return false;

  cout << n << ": ";
  if (digit(n) & 1) {
    cout << "no\n";
    return true;
  }

  unordered_set<long long> s = factors(n);
  for (long long x : s) {
    if (digit(x) != digit(n) / 2) continue;
    if (digit(n / x) != digit(n) / 2) continue;
    if (x % 10 == 0 && (n / x) % 10 == 0) continue;
    if (to_string(x).find("00") != string::npos) continue;
    if (to_string(n / x).find("00") != string::npos) continue;
    if (check(x, n / x, n)) {
      cout << "yes\n";
      return true;
    }
  }

  cout << "no\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
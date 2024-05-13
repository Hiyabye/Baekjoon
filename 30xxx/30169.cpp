#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

long long cnt(long long n, long long p) {
  long long ret = 0;
  while (n) {
    n /= p;
    ret += n;
  }
  return ret;
}

void solve(void) {
  long long x, n; cin >> x >> n;

  vector<long long> p;
  for (long long i=2; i*i<=x; i++) {
    if (!(x % i)) {
      p.push_back(i);
      while (!(x % i)) x /= i;
    }
  }
  if (x > 1) p.push_back(x);

  long long ans = 1;
  for (long long i=0; i<p.size(); i++) {
    ans = ans * power(p[i], cnt(n, p[i])) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
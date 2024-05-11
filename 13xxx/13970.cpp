#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long phi(long long n) {
  long long ret = n;
  for (long long i=2; i*i<=n; i++) {
    if (n % i) continue;
    ret -= ret / i;
    while (!(n % i)) n /= i;
  }
  if (n > 1) ret -= ret / n;
  return ret;
}

vector<long long> precompute(long long m) {
  vector<long long> ret(1); ret[0] = m;
  while (ret.back() > 1) {
    ret.push_back(phi(ret.back()));
  }
  return ret;
}

inline long long calc(long long x, long long mod) {
  return x % mod + (x < mod ? 0 : mod);
}

long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = calc(ret * base, mod);
    base = calc(base * base, mod);
    exp >>= 1;
  }
  return ret;
}

void solve(const vector<long long> &p) {
  int n; cin >> n;
  vector<long long> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  long long ans = 1;
  for (int i=min(x.size(), p.size())-1; i>=0; i--) {
    ans = power(calc(x[i], p[i]), ans, p[i]);
  }
  cout << ans % p[0] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, m; cin >> t >> m;
  vector<long long> p = precompute(m);
  while (t--) solve(p);
  return 0;
}
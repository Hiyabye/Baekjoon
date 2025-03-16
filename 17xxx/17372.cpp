#include <iostream>
#include <unordered_map>
#include <utility>
#define MOD 1000000007
using namespace std;

unordered_map<long long, long long> memo;

void precompute(int n) {
  unordered_map<long long, long long> phi;
  for (int i=1; i<=n; i++) phi[i] = i;
  for (int i=2; i<=n; i++) {
    if (phi[i] != i) continue;
    for (int j=i; j<=n; j+=i) phi[j] -= phi[j] / i;
  }
  memo[0] = 0;
  for (int i=1; i<=n; i++) {
    memo[i] = (memo[i-1] + phi[i]) % MOD;
  }
}

long long phi(long long n) {
  if (memo.count(n)) return memo[n];
  long long ret = (n % MOD) * ((n+1) % MOD) % MOD;
  ret = (ret * (MOD + 1) / 2) % MOD;
  for (long long i=2, j; i<=n; i=j+1) {
    j = n / (n / i);
    long long cnt = (j - i + 1) % MOD;
    ret = (ret - (cnt * phi(n / i)) % MOD + MOD) % MOD;
  }
  return memo[n] = ret;
}

pair<long long, long long> fibp(long long n) {
  if (n == 0) return {0, 1};
  auto [a, b] = fibp(n >> 1);
  long long c = (a * ((2 * b % MOD + MOD - a) % MOD)) % MOD;
  long long d = ((a * a) % MOD + (b * b) % MOD) % MOD;
  if (n & 1) return {d, (c + d) % MOD};
  return {c, d};
}

long long fibo(long long n) {
  return fibp(n).first;
}

long long fibs(long long l, long long r) {
  return (fibo(r+2) - fibo(l+1) + MOD) % MOD;
}

void solve(void) {
  long long n; cin >> n;

  long long ans = 0;
  for (long long d=1, r; d<=n; d=r+1) {
    long long x = n / d; r = n / x;
    long long fx = (2 * phi(x) - 1 + MOD) % MOD;
    ans = (ans + fx * fibs(d, r)) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute(1000000);
  solve();
  return 0;
}
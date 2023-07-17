#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007

vector<bool> sieve(long long n) {
  vector<bool> prime(n + 1, true);
  prime[0] = prime[1] = false;
  for (long long i = 4; i <= n; i += 2) {
    prime[i] = false;
  }

  for (long long i = 3; i * i <= n; i += 2) {
    if (prime[i]) {
      for (long long j = i * i; j <= n; j += i * 2) {
        prime[j] = false;
      }
    }
  }
  return prime;
}

long long power(long long base, long long exp) {
  if (exp == 0) return 1;
  if (exp == 1) return base;
  long long half = power(base, exp / 2);
  if (exp % 2) return (((half * half) % MOD) * base) % MOD;
  return (half * half) % MOD;
}

void solve(void) {
  long long n, m;
  cin >> n >> m;
  vector<bool> prime = sieve(min(n, m));

  long long ans = 1;
  for (long long i=1; i<=min(n, m); i++) {
    if (!prime[i]) continue;
    for (long long j=i; j<=min(n, m); j*=i) {
      ans = (ans * power(i, (n/j)*(m/j))) % MOD;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
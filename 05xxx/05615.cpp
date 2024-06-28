#include <iostream>
#define ull unsigned long long
using namespace std;

ull power(ull base, ull exp, ull mod) {
  if (exp == 0) return 1;
  if (exp == 1) return base % mod;
  ull half = power(base, exp/2, mod) % mod;
  if (exp % 2 == 0) return half * half % mod;
  return (half * half % mod) * base % mod;
}

bool miller_rabin(ull n, ull a) {
  int r = 0;
  ull d = n-1;
  while (d % 2 == 0) {
    r++;
    d >>= 1;
  }

  ull x = power(a, d, n);
  if (x == 1 || x == n-1) return true;
  for (int i=0; i<r-1; i++) {
    x = x * x % n;
    if (x == n-1) return true;
  }
  return false;
}

bool prime(ull n) {
  ull a[5] = {2, 3, 5, 7, 11};
  if (n <= 1) return false;
  if (n == 2 || n == 3) return true;
  if (n % 2 == 0) return false;

  for (int i=0; i<5; i++) {
    if (n == a[i]) return true;
    if (!miller_rabin(n, a[i])) return false;
  }
  return true;
}

void solve(void) {
  int n, ans = 0;
  cin >> n;
  ull x;
  for (int i=0; i<n; i++) {
    cin >> x;
    if (prime(2*x+1)) ans++;
  }

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
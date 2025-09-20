#include <iostream>
#include <vector>
using namespace std;

long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long l, r, p; cin >> l >> r >> p;
  if (l == r) {
    cout << power(l, p-2, p);
    return;
  }

  vector<long long> pre(r-l+1, 0); pre[0] = l % p;
  for (int i=1; i<=r-l; i++) pre[i] = pre[i-1] * (l+i) % p;
  vector<long long> suf(r-l+1, 0); suf[r-l] = r % p;
  for (int i=r-l-1; i>=0; i--) suf[i] = suf[i+1] * (l+i) % p;

  long long ans = 0, inv = power(pre[r-l], p-2, p);
  for (int i=0; i<=r-l; i++) {
    if (i == 0) ans = (ans + (suf[1] * inv % p)) % p;
    else if (i == r-l) ans = (ans + (pre[r-l-1] * inv % p)) % p;
    else ans = (ans + ((pre[i-1] * suf[i+1] % p) * inv % p)) % p;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
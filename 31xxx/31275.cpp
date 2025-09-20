#include <iostream>
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
  int n, m; cin >> n >> m;

  long long ans = 0;
  for (int i=2; i<=n+1; i++) {
    int x; cin >> x;
    ans = (ans + power(x, i, m)) % m;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
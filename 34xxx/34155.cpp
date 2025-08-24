#include <iostream>
#define MOD 998244353
using namespace std;

inline long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  int cnt = 0;
  for (int i=1; i<=n; i++) {
    int a; cin >> a;
    if (a == i) cnt++;
  }
  cout << power(n-1, cnt) * power(n-2, n-cnt) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
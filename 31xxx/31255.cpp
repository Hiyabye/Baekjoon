#include <iostream>
#define MOD 123456789
using namespace std;

inline long long calc(long long x) {
  return (x*(x+1)/2) % MOD;
}

void solve(void) {
  long long n, p, q; cin >> n >> p >> q;

  cout << (calc(n) + MOD - calc(p-1) + MOD - calc(q-p-1) + MOD - calc(n-q)) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
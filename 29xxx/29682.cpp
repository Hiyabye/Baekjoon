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
  long long a, m; cin >> a >> m;

  cout << power(a, m-2, m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
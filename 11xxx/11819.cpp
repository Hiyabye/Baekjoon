#include <iostream>
#define int128 __int128
using namespace std;

long long power(int128 base, int128 exp, int128 mod) {
  int128 ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long a, b, c; cin >> a >> b >> c;

  cout << power(a % c, b, c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
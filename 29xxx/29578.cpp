#include <iostream>
using namespace std;

inline long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

inline bool check(int k) {
  return (power(1, k, k) + power(2, k, k) + power(3, k, k) + power(4, k, k) + power(5, k, k) + power(6, k, k)) % k == 0;
}

void solve(void) {
  int n; cin >> n;

  int ans = 1;
  while (n) {
    if (check(ans)) n--;
    ans++;
  }
  cout << ans - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}